void LOGGER_init__(LOGGER *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MSG,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->LEVEL,LOGLEVEL__INFO,retain)
  __INIT_VAR(data__->TRIG0,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void LOGGER_body__(LOGGER *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  if ((__GET_VAR(data__->TRIG,) && !(__GET_VAR(data__->TRIG0,)))) {
    #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
    #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)

   LogMessage(GetFbVar(LEVEL),(char*)GetFbVar(MSG, .body),GetFbVar(MSG, .len));
  
    #undef GetFbVar
    #undef SetFbVar
;
  };
  __SET_VAR(data__->,TRIG0,,__GET_VAR(data__->TRIG,));

  goto __end;

__end:
  return;
} // LOGGER_body__() 





void PROGRAM0_init__(PROGRAM0 *data__, BOOL retain) {
  __INIT_LOCATED(BOOL,__IX0_0,data__->A,retain)
  __INIT_LOCATED_VALUE(data__->A,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_1,data__->B,retain)
  __INIT_LOCATED_VALUE(data__->B,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_2,data__->C,retain)
  __INIT_LOCATED_VALUE(data__->C,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0,data__->H1,retain)
  __INIT_LOCATED_VALUE(data__->H1,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_1,data__->H2,retain)
  __INIT_LOCATED_VALUE(data__->H2,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_2,data__->H3,retain)
  __INIT_LOCATED_VALUE(data__->H3,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_3,data__->H4,retain)
  __INIT_LOCATED_VALUE(data__->H4,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_4,data__->H5,retain)
  __INIT_LOCATED_VALUE(data__->H5,__BOOL_LITERAL(FALSE))
}

// Code part
void PROGRAM0_body__(PROGRAM0 *data__) {
  // Initialise TEMP variables

  __SET_LOCATED(data__->,H1,,(__GET_LOCATED(data__->B,) && __GET_LOCATED(data__->A,)));
  __SET_LOCATED(data__->,H2,,((__GET_LOCATED(data__->B,) && __GET_LOCATED(data__->A,)) || (!(__GET_LOCATED(data__->C,)) && __GET_LOCATED(data__->A,))));
  __SET_LOCATED(data__->,H3,,((__GET_LOCATED(data__->C,) && __GET_LOCATED(data__->B,)) && __GET_LOCATED(data__->A,)));
  __SET_LOCATED(data__->,H4,,((!(__GET_LOCATED(data__->C,)) && !(__GET_LOCATED(data__->B,))) && !(__GET_LOCATED(data__->A,))));
  __SET_LOCATED(data__->,H5,,((__GET_LOCATED(data__->B,) && !(__GET_LOCATED(data__->A,))) || (__GET_LOCATED(data__->C,) && !(__GET_LOCATED(data__->B,)))));

  goto __end;

__end:
  return;
} // PROGRAM0_body__() 





