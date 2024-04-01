PROGRAM program0
  VAR
    A AT %IX0.0 : BOOL;
    B AT %IX0.1 : BOOL;
    C AT %IX0.2 : BOOL;
    H1 AT %QX0.0 : BOOL;
    H2 AT %QX0.1 : BOOL;
    H3 AT %QX0.2 : BOOL;
    H4 AT %QX0.3 : BOOL;
    H5 AT %QX0.4 : BOOL;
  END_VAR

  H1 := B AND A;
  H2 := B AND A OR NOT(C) AND A;
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
