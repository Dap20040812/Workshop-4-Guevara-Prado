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
  __INIT_VAR(data__->A,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->C,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->H1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->H2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->H3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->H4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->H5,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PROGRAM0_body__(PROGRAM0 *data__) {
  // Initialise TEMP variables

  __SET_VAR(data__->,H1,,((!(__GET_VAR(data__->C,)) && __GET_VAR(data__->B,)) && __GET_VAR(data__->A,)));
  __SET_VAR(data__->,H2,,((!(__GET_VAR(data__->C,)) && !(__GET_VAR(data__->B,))) && __GET_VAR(data__->A,)));
  __SET_VAR(data__->,H3,,((__GET_VAR(data__->C,) && __GET_VAR(data__->B,)) && __GET_VAR(data__->A,)));
  __SET_VAR(data__->,H4,,((!(__GET_VAR(data__->C,)) && !(__GET_VAR(data__->B,))) && !(__GET_VAR(data__->A,))));
  __SET_VAR(data__->,H5,,((__GET_VAR(data__->B,) && !(__GET_VAR(data__->A,))) || (__GET_VAR(data__->C,) && !(__GET_VAR(data__->B,)))));

  goto __end;

__end:
  return;
} // PROGRAM0_body__() 





