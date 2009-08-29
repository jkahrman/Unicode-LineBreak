/*
 * This file is automatically generated.  DON'T EDIT THIS FILE MANUALLY.
 */
#include "EXTERN.h"
#include "perl.h"
#include "XSUB.h"
#include "ppport.h"
#ifdef USE_LIBTHAI
#    include "thai/thwchar.h"
#    include "thai/thwbrk.h"
#endif /* USE_LIBTHAI */

typedef unsigned int unichar_t;
typedef size_t propval_t;

typedef struct {
    unichar_t *str;
    size_t len;
} unistr_t;

typedef struct {
    unichar_t beg;
    unichar_t end;
    propval_t prop;
} mapent_t;

typedef struct {
    mapent_t *lbmap;
    size_t lbmapsiz;
    mapent_t *eamap;
    size_t eamapsiz;
    unsigned int options;
} linebreakObj;

#define LINEBREAK_OPTION_EASTASIAN_CONTEXT (1)
#define PROP_UNKNOWN ((propval_t)~0)

#define M (4)
#define D (3)
#define I (2)
#define P (1)

#define MANDATORY (M)
#define DIRECT (D)
#define INDIRECT (I)
#define PROHIBITED (P)
#define URGENT (200)

/* <<< */
#define LB_BK ((propval_t)0)
#define LB_CR ((propval_t)1)
#define LB_LF ((propval_t)2)
#define LB_NL ((propval_t)3)
#define LB_SP ((propval_t)4)
#define LB_OP ((propval_t)5)
#define LB_CL ((propval_t)6)
#define LB_QU ((propval_t)7)
#define LB_GL ((propval_t)8)
#define LB_NS ((propval_t)9)
#define LB_EX ((propval_t)10)
#define LB_SY ((propval_t)11)
#define LB_IS ((propval_t)12)
#define LB_PR ((propval_t)13)
#define LB_PO ((propval_t)14)
#define LB_NU ((propval_t)15)
#define LB_AL ((propval_t)16)
#define LB_ID ((propval_t)17)
#define LB_IN ((propval_t)18)
#define LB_HY ((propval_t)19)
#define LB_BA ((propval_t)20)
#define LB_BB ((propval_t)21)
#define LB_B2 ((propval_t)22)
#define LB_CB ((propval_t)23)
#define LB_ZW ((propval_t)24)
#define LB_CM ((propval_t)25)
#define LB_WJ ((propval_t)26)
#define LB_H2 ((propval_t)27)
#define LB_H3 ((propval_t)28)
#define LB_JL ((propval_t)29)
#define LB_JV ((propval_t)30)
#define LB_JT ((propval_t)31)
#define LB_CP ((propval_t)32)
#define LB_SG ((propval_t)33)
#define LB_AI ((propval_t)34)
#define LB_SA ((propval_t)35)
#define LB_XX ((propval_t)36)
#define LB_SAbase ((propval_t)37)
#define LB_SAextend ((propval_t)38)
#define LB_SAprepend ((propval_t)39)

#define EA_Z ((propval_t)0)
#define EA_Na ((propval_t)1)
#define EA_N ((propval_t)2)
#define EA_A ((propval_t)3)
#define EA_W ((propval_t)4)
#define EA_H ((propval_t)5)
#define EA_F ((propval_t)6)

#define SCRIPT_Common ((propval_t)0)
#define SCRIPT_Inherited ((propval_t)1)
#define SCRIPT_Thai ((propval_t)2)
#define SCRIPT_Lao ((propval_t)3)
#define SCRIPT_Myanmar ((propval_t)4)
#define SCRIPT_Khmer ((propval_t)5)
#define SCRIPT_Tai_Le ((propval_t)6)
#define SCRIPT_New_Tai_Lue ((propval_t)7)
#define SCRIPT_Tai_Tham ((propval_t)8)
#define SCRIPT_Tai_Viet ((propval_t)9)


/* >>> */
