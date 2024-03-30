TYPE
  LOGLEVEL : (CRITICAL, WARNING, INFO, DEBUG) := INFO;
END_TYPE

FUNCTION_BLOCK LOGGER
  VAR_INPUT
    TRIG : BOOL;
    MSG : STRING;
    LEVEL : LOGLEVEL := INFO;
  END_VAR
  VAR
    TRIG0 : BOOL;
  END_VAR

  IF TRIG AND NOT TRIG0 THEN
  {{
   LogMessage(GetFbVar(LEVEL),(char*)GetFbVar(MSG, .body),GetFbVar(MSG, .len));
  }}
  END_IF;
  TRIG0:=TRIG;
END_FUNCTION_BLOCK


PROGRAM program0
  VAR
    A : BOOL;
    B : BOOL;
    C : BOOL;
    H1 : BOOL;
    H2 : BOOL;
    H3 : BOOL;
    H4 : BOOL;
    H5 : BOOL;
  END_VAR

  H1 := NOT(C) AND B AND A;
  H2 := NOT(C) AND NOT(B) AND A;
  H3 := C AND B AND A;
  H4 := NOT(C) AND NOT(B) AND NOT(A);
  H5 := B AND NOT(A) OR C AND NOT(B);
END_PROGRAM


CONFIGURATION Config0

  RESOURCE Res0 ON PLC
    TASK task0(INTERVAL := T#20ms,PRIORITY := 0);
    PROGRAM instance0 WITH task0 : program0;
  END_RESOURCE
END_CONFIGURATION
