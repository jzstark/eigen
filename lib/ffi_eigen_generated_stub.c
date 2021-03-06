#include <stdint.h>
#include "eigen_dsmat.h"
#include "eigen_spmat.h"
#include "eigen_tensor.h"
#include "ctypes_cstubs_internals.h"
value owl_stub_1_c_eigen_dsmat_s_new(value x2, value x1)
{
   int64_t x3 = Int64_val(x2);
   int64_t x6 = Int64_val(x1);
   struct c_dsmat_s* x9 = c_eigen_dsmat_s_new(x3, x6);
   return CTYPES_FROM_PTR(x9);
}
value owl_stub_2_c_eigen_dsmat_s_delete(value x10)
{
   struct c_dsmat_s* x11 = CTYPES_ADDR_OF_FATPTR(x10);
   c_eigen_dsmat_s_delete(x11);
   return Val_unit;
}
value owl_stub_3_c_eigen_dsmat_s_zeros(value x14, value x13)
{
   int64_t x15 = Int64_val(x14);
   int64_t x18 = Int64_val(x13);
   struct c_dsmat_s* x21 = c_eigen_dsmat_s_zeros(x15, x18);
   return CTYPES_FROM_PTR(x21);
}
value owl_stub_4_c_eigen_dsmat_s_ones(value x23, value x22)
{
   int64_t x24 = Int64_val(x23);
   int64_t x27 = Int64_val(x22);
   struct c_dsmat_s* x30 = c_eigen_dsmat_s_ones(x24, x27);
   return CTYPES_FROM_PTR(x30);
}
value owl_stub_5_c_eigen_dsmat_s_eye(value x31)
{
   int64_t x32 = Int64_val(x31);
   struct c_dsmat_s* x35 = c_eigen_dsmat_s_eye(x32);
   return CTYPES_FROM_PTR(x35);
}
value owl_stub_6_c_eigen_dsmat_s_rows(value x36)
{
   struct c_dsmat_s* x37 = CTYPES_ADDR_OF_FATPTR(x36);
   int64_t x38 = c_eigen_dsmat_s_rows(x37);
   return caml_copy_int64(x38);
}
value owl_stub_7_c_eigen_dsmat_s_cols(value x39)
{
   struct c_dsmat_s* x40 = CTYPES_ADDR_OF_FATPTR(x39);
   int64_t x41 = c_eigen_dsmat_s_cols(x40);
   return caml_copy_int64(x41);
}
value owl_stub_8_c_eigen_dsmat_s_get(value x44, value x43, value x42)
{
   struct c_dsmat_s* x45 = CTYPES_ADDR_OF_FATPTR(x44);
   int64_t x46 = Int64_val(x43);
   int64_t x49 = Int64_val(x42);
   float x52 = c_eigen_dsmat_s_get(x45, x46, x49);
   return caml_copy_double(x52);
}
value owl_stub_9_c_eigen_dsmat_s_set(value x56, value x55, value x54,
                                     value x53)
{
   struct c_dsmat_s* x57 = CTYPES_ADDR_OF_FATPTR(x56);
   int64_t x58 = Int64_val(x55);
   int64_t x61 = Int64_val(x54);
   double x64 = Double_val(x53);
   c_eigen_dsmat_s_set(x57, x58, x61, (float)x64);
   return Val_unit;
}
value owl_stub_10_c_eigen_dsmat_s_data(value x68)
{
   struct c_dsmat_s* x69 = CTYPES_ADDR_OF_FATPTR(x68);
   float* x70 = c_eigen_dsmat_s_data(x69);
   return CTYPES_FROM_PTR(x70);
}
value owl_stub_11_c_eigen_dsmat_s_of_bigarray(value x73, value x72,
                                              value x71)
{
   float* x74 = CTYPES_ADDR_OF_FATPTR(x73);
   int64_t x75 = Int64_val(x72);
   int64_t x78 = Int64_val(x71);
   struct c_dsmat_s* x81 = c_eigen_dsmat_s_of_bigarray(x74, x75, x78);
   return CTYPES_FROM_PTR(x81);
}
value owl_stub_12_c_eigen_dsmat_s_of_bigarray2(value x85, value x84,
                                               value x83, value x82)
{
   struct c_dsmat_s* x86 = CTYPES_ADDR_OF_FATPTR(x85);
   float* x87 = CTYPES_ADDR_OF_FATPTR(x84);
   int64_t x88 = Int64_val(x83);
   int64_t x91 = Int64_val(x82);
   c_eigen_dsmat_s_of_bigarray2(x86, x87, x88, x91);
   return Val_unit;
}
value owl_stub_13_c_eigen_dsmat_s_print(value x95)
{
   struct c_dsmat_s* x96 = CTYPES_ADDR_OF_FATPTR(x95);
   c_eigen_dsmat_s_print(x96);
   return Val_unit;
}
value owl_stub_14_c_eigen_dsmat_s_gemm(value x103, value x102, value x101,
                                       value x100, value x99, value x98)
{
   float* x104 = CTYPES_ADDR_OF_FATPTR(x103);
   int64_t x105 = Int64_val(x102);
   int64_t x108 = Int64_val(x101);
   float* x111 = CTYPES_ADDR_OF_FATPTR(x100);
   int64_t x112 = Int64_val(x99);
   int64_t x115 = Int64_val(x98);
   struct c_dsmat_s* x118 =
   c_eigen_dsmat_s_gemm(x104, x105, x108, x111, x112, x115);
   return CTYPES_FROM_PTR(x118);
}
value owl_stub_14_c_eigen_dsmat_s_gemm_byte6(value* argv, int argc)
{
   value x119 = argv[5];
   value x120 = argv[4];
   value x121 = argv[3];
   value x122 = argv[2];
   value x123 = argv[1];
   value x124 = argv[0];
   return
     owl_stub_14_c_eigen_dsmat_s_gemm(x124, x123, x122, x121, x120, x119);
}
value owl_stub_15_c_eigen_dsmat_s_transpose(value x127, value x126,
                                            value x125)
{
   float* x128 = CTYPES_ADDR_OF_FATPTR(x127);
   int64_t x129 = Int64_val(x126);
   int64_t x132 = Int64_val(x125);
   struct c_dsmat_s* x135 = c_eigen_dsmat_s_transpose(x128, x129, x132);
   return CTYPES_FROM_PTR(x135);
}
value owl_stub_16_c_eigen_dsmat_s_swap_rows(value x140, value x139,
                                            value x138, value x137,
                                            value x136)
{
   float* x141 = CTYPES_ADDR_OF_FATPTR(x140);
   int64_t x142 = Int64_val(x139);
   int64_t x145 = Int64_val(x138);
   int64_t x148 = Int64_val(x137);
   int64_t x151 = Int64_val(x136);
   c_eigen_dsmat_s_swap_rows(x141, x142, x145, x148, x151);
   return Val_unit;
}
value owl_stub_17_c_eigen_dsmat_s_swap_cols(value x159, value x158,
                                            value x157, value x156,
                                            value x155)
{
   float* x160 = CTYPES_ADDR_OF_FATPTR(x159);
   int64_t x161 = Int64_val(x158);
   int64_t x164 = Int64_val(x157);
   int64_t x167 = Int64_val(x156);
   int64_t x170 = Int64_val(x155);
   c_eigen_dsmat_s_swap_cols(x160, x161, x164, x167, x170);
   return Val_unit;
}
value owl_stub_18_c_eigen_dsmat_s_rowwise_op(value x178, value x177,
                                             value x176, value x175,
                                             value x174)
{
   int x179 = Long_val(x178);
   float* x182 = CTYPES_ADDR_OF_FATPTR(x177);
   int64_t x183 = Int64_val(x176);
   int64_t x186 = Int64_val(x175);
   float* x189 = CTYPES_ADDR_OF_FATPTR(x174);
   c_eigen_dsmat_s_rowwise_op(x179, x182, x183, x186, x189);
   return Val_unit;
}
value owl_stub_19_c_eigen_dsmat_s_colwise_op(value x195, value x194,
                                             value x193, value x192,
                                             value x191)
{
   int x196 = Long_val(x195);
   float* x199 = CTYPES_ADDR_OF_FATPTR(x194);
   int64_t x200 = Int64_val(x193);
   int64_t x203 = Int64_val(x192);
   float* x206 = CTYPES_ADDR_OF_FATPTR(x191);
   c_eigen_dsmat_s_colwise_op(x196, x199, x200, x203, x206);
   return Val_unit;
}
value owl_stub_20_c_eigen_dsmat_s_inv(value x210, value x209, value x208)
{
   float* x211 = CTYPES_ADDR_OF_FATPTR(x210);
   int64_t x212 = Int64_val(x209);
   int64_t x215 = Int64_val(x208);
   struct c_dsmat_s* x218 = c_eigen_dsmat_s_inv(x211, x212, x215);
   return CTYPES_FROM_PTR(x218);
}
value owl_stub_21_c_eigen_dsmat_d_new(value x220, value x219)
{
   int64_t x221 = Int64_val(x220);
   int64_t x224 = Int64_val(x219);
   struct c_dsmat_d* x227 = c_eigen_dsmat_d_new(x221, x224);
   return CTYPES_FROM_PTR(x227);
}
value owl_stub_22_c_eigen_dsmat_d_delete(value x228)
{
   struct c_dsmat_d* x229 = CTYPES_ADDR_OF_FATPTR(x228);
   c_eigen_dsmat_d_delete(x229);
   return Val_unit;
}
value owl_stub_23_c_eigen_dsmat_d_zeros(value x232, value x231)
{
   int64_t x233 = Int64_val(x232);
   int64_t x236 = Int64_val(x231);
   struct c_dsmat_d* x239 = c_eigen_dsmat_d_zeros(x233, x236);
   return CTYPES_FROM_PTR(x239);
}
value owl_stub_24_c_eigen_dsmat_d_ones(value x241, value x240)
{
   int64_t x242 = Int64_val(x241);
   int64_t x245 = Int64_val(x240);
   struct c_dsmat_d* x248 = c_eigen_dsmat_d_ones(x242, x245);
   return CTYPES_FROM_PTR(x248);
}
value owl_stub_25_c_eigen_dsmat_d_eye(value x249)
{
   int64_t x250 = Int64_val(x249);
   struct c_dsmat_d* x253 = c_eigen_dsmat_d_eye(x250);
   return CTYPES_FROM_PTR(x253);
}
value owl_stub_26_c_eigen_dsmat_d_rows(value x254)
{
   struct c_dsmat_d* x255 = CTYPES_ADDR_OF_FATPTR(x254);
   int64_t x256 = c_eigen_dsmat_d_rows(x255);
   return caml_copy_int64(x256);
}
value owl_stub_27_c_eigen_dsmat_d_cols(value x257)
{
   struct c_dsmat_d* x258 = CTYPES_ADDR_OF_FATPTR(x257);
   int64_t x259 = c_eigen_dsmat_d_cols(x258);
   return caml_copy_int64(x259);
}
value owl_stub_28_c_eigen_dsmat_d_get(value x262, value x261, value x260)
{
   struct c_dsmat_d* x263 = CTYPES_ADDR_OF_FATPTR(x262);
   int64_t x264 = Int64_val(x261);
   int64_t x267 = Int64_val(x260);
   double x270 = c_eigen_dsmat_d_get(x263, x264, x267);
   return caml_copy_double(x270);
}
value owl_stub_29_c_eigen_dsmat_d_set(value x274, value x273, value x272,
                                      value x271)
{
   struct c_dsmat_d* x275 = CTYPES_ADDR_OF_FATPTR(x274);
   int64_t x276 = Int64_val(x273);
   int64_t x279 = Int64_val(x272);
   double x282 = Double_val(x271);
   c_eigen_dsmat_d_set(x275, x276, x279, x282);
   return Val_unit;
}
value owl_stub_30_c_eigen_dsmat_d_data(value x286)
{
   struct c_dsmat_d* x287 = CTYPES_ADDR_OF_FATPTR(x286);
   double* x288 = c_eigen_dsmat_d_data(x287);
   return CTYPES_FROM_PTR(x288);
}
value owl_stub_31_c_eigen_dsmat_d_print(value x289)
{
   struct c_dsmat_d* x290 = CTYPES_ADDR_OF_FATPTR(x289);
   c_eigen_dsmat_d_print(x290);
   return Val_unit;
}
value owl_stub_32_c_eigen_dsmat_d_gemm(value x297, value x296, value x295,
                                       value x294, value x293, value x292)
{
   double* x298 = CTYPES_ADDR_OF_FATPTR(x297);
   int64_t x299 = Int64_val(x296);
   int64_t x302 = Int64_val(x295);
   double* x305 = CTYPES_ADDR_OF_FATPTR(x294);
   int64_t x306 = Int64_val(x293);
   int64_t x309 = Int64_val(x292);
   struct c_dsmat_d* x312 =
   c_eigen_dsmat_d_gemm(x298, x299, x302, x305, x306, x309);
   return CTYPES_FROM_PTR(x312);
}
value owl_stub_32_c_eigen_dsmat_d_gemm_byte6(value* argv, int argc)
{
   value x313 = argv[5];
   value x314 = argv[4];
   value x315 = argv[3];
   value x316 = argv[2];
   value x317 = argv[1];
   value x318 = argv[0];
   return
     owl_stub_32_c_eigen_dsmat_d_gemm(x318, x317, x316, x315, x314, x313);
}
value owl_stub_33_c_eigen_dsmat_d_transpose(value x321, value x320,
                                            value x319)
{
   double* x322 = CTYPES_ADDR_OF_FATPTR(x321);
   int64_t x323 = Int64_val(x320);
   int64_t x326 = Int64_val(x319);
   struct c_dsmat_d* x329 = c_eigen_dsmat_d_transpose(x322, x323, x326);
   return CTYPES_FROM_PTR(x329);
}
value owl_stub_34_c_eigen_dsmat_d_swap_rows(value x334, value x333,
                                            value x332, value x331,
                                            value x330)
{
   double* x335 = CTYPES_ADDR_OF_FATPTR(x334);
   int64_t x336 = Int64_val(x333);
   int64_t x339 = Int64_val(x332);
   int64_t x342 = Int64_val(x331);
   int64_t x345 = Int64_val(x330);
   c_eigen_dsmat_d_swap_rows(x335, x336, x339, x342, x345);
   return Val_unit;
}
value owl_stub_35_c_eigen_dsmat_d_swap_cols(value x353, value x352,
                                            value x351, value x350,
                                            value x349)
{
   double* x354 = CTYPES_ADDR_OF_FATPTR(x353);
   int64_t x355 = Int64_val(x352);
   int64_t x358 = Int64_val(x351);
   int64_t x361 = Int64_val(x350);
   int64_t x364 = Int64_val(x349);
   c_eigen_dsmat_d_swap_cols(x354, x355, x358, x361, x364);
   return Val_unit;
}
value owl_stub_36_c_eigen_dsmat_d_rowwise_op(value x372, value x371,
                                             value x370, value x369,
                                             value x368)
{
   int x373 = Long_val(x372);
   double* x376 = CTYPES_ADDR_OF_FATPTR(x371);
   int64_t x377 = Int64_val(x370);
   int64_t x380 = Int64_val(x369);
   double* x383 = CTYPES_ADDR_OF_FATPTR(x368);
   c_eigen_dsmat_d_rowwise_op(x373, x376, x377, x380, x383);
   return Val_unit;
}
value owl_stub_37_c_eigen_dsmat_d_colwise_op(value x389, value x388,
                                             value x387, value x386,
                                             value x385)
{
   int x390 = Long_val(x389);
   double* x393 = CTYPES_ADDR_OF_FATPTR(x388);
   int64_t x394 = Int64_val(x387);
   int64_t x397 = Int64_val(x386);
   double* x400 = CTYPES_ADDR_OF_FATPTR(x385);
   c_eigen_dsmat_d_colwise_op(x390, x393, x394, x397, x400);
   return Val_unit;
}
value owl_stub_38_c_eigen_dsmat_d_inv(value x404, value x403, value x402)
{
   double* x405 = CTYPES_ADDR_OF_FATPTR(x404);
   int64_t x406 = Int64_val(x403);
   int64_t x409 = Int64_val(x402);
   struct c_dsmat_d* x412 = c_eigen_dsmat_d_inv(x405, x406, x409);
   return CTYPES_FROM_PTR(x412);
}
value owl_stub_39_c_eigen_dsmat_c_new(value x414, value x413)
{
   int64_t x415 = Int64_val(x414);
   int64_t x418 = Int64_val(x413);
   struct c_dsmat_c* x421 = c_eigen_dsmat_c_new(x415, x418);
   return CTYPES_FROM_PTR(x421);
}
value owl_stub_40_c_eigen_dsmat_c_delete(value x422)
{
   struct c_dsmat_c* x423 = CTYPES_ADDR_OF_FATPTR(x422);
   c_eigen_dsmat_c_delete(x423);
   return Val_unit;
}
value owl_stub_41_c_eigen_dsmat_c_zeros(value x426, value x425)
{
   int64_t x427 = Int64_val(x426);
   int64_t x430 = Int64_val(x425);
   struct c_dsmat_c* x433 = c_eigen_dsmat_c_zeros(x427, x430);
   return CTYPES_FROM_PTR(x433);
}
value owl_stub_42_c_eigen_dsmat_c_ones(value x435, value x434)
{
   int64_t x436 = Int64_val(x435);
   int64_t x439 = Int64_val(x434);
   struct c_dsmat_c* x442 = c_eigen_dsmat_c_ones(x436, x439);
   return CTYPES_FROM_PTR(x442);
}
value owl_stub_43_c_eigen_dsmat_c_eye(value x443)
{
   int64_t x444 = Int64_val(x443);
   struct c_dsmat_c* x447 = c_eigen_dsmat_c_eye(x444);
   return CTYPES_FROM_PTR(x447);
}
value owl_stub_44_c_eigen_dsmat_c_rows(value x448)
{
   struct c_dsmat_c* x449 = CTYPES_ADDR_OF_FATPTR(x448);
   int64_t x450 = c_eigen_dsmat_c_rows(x449);
   return caml_copy_int64(x450);
}
value owl_stub_45_c_eigen_dsmat_c_cols(value x451)
{
   struct c_dsmat_c* x452 = CTYPES_ADDR_OF_FATPTR(x451);
   int64_t x453 = c_eigen_dsmat_c_cols(x452);
   return caml_copy_int64(x453);
}
value owl_stub_46_c_eigen_dsmat_c_get(value x456, value x455, value x454)
{
   struct c_dsmat_c* x457 = CTYPES_ADDR_OF_FATPTR(x456);
   int64_t x458 = Int64_val(x455);
   int64_t x461 = Int64_val(x454);
   float _Complex x464 = c_eigen_dsmat_c_get(x457, x458, x461);
   return ctypes_copy_float_complex(x464);
}
value owl_stub_47_c_eigen_dsmat_c_set(value x468, value x467, value x466,
                                      value x465)
{
   struct c_dsmat_c* x469 = CTYPES_ADDR_OF_FATPTR(x468);
   int64_t x470 = Int64_val(x467);
   int64_t x473 = Int64_val(x466);
   float _Complex x476 = ctypes_float_complex_val(x465);
   c_eigen_dsmat_c_set(x469, x470, x473, x476);
   return Val_unit;
}
value owl_stub_48_c_eigen_dsmat_c_data(value x480)
{
   struct c_dsmat_c* x481 = CTYPES_ADDR_OF_FATPTR(x480);
   float _Complex* x482 = c_eigen_dsmat_c_data(x481);
   return CTYPES_FROM_PTR(x482);
}
value owl_stub_49_c_eigen_dsmat_c_print(value x483)
{
   struct c_dsmat_c* x484 = CTYPES_ADDR_OF_FATPTR(x483);
   c_eigen_dsmat_c_print(x484);
   return Val_unit;
}
value owl_stub_50_c_eigen_dsmat_c_gemm(value x491, value x490, value x489,
                                       value x488, value x487, value x486)
{
   float _Complex* x492 = CTYPES_ADDR_OF_FATPTR(x491);
   int64_t x493 = Int64_val(x490);
   int64_t x496 = Int64_val(x489);
   float _Complex* x499 = CTYPES_ADDR_OF_FATPTR(x488);
   int64_t x500 = Int64_val(x487);
   int64_t x503 = Int64_val(x486);
   struct c_dsmat_c* x506 =
   c_eigen_dsmat_c_gemm(x492, x493, x496, x499, x500, x503);
   return CTYPES_FROM_PTR(x506);
}
value owl_stub_50_c_eigen_dsmat_c_gemm_byte6(value* argv, int argc)
{
   value x507 = argv[5];
   value x508 = argv[4];
   value x509 = argv[3];
   value x510 = argv[2];
   value x511 = argv[1];
   value x512 = argv[0];
   return
     owl_stub_50_c_eigen_dsmat_c_gemm(x512, x511, x510, x509, x508, x507);
}
value owl_stub_51_c_eigen_dsmat_c_transpose(value x515, value x514,
                                            value x513)
{
   float _Complex* x516 = CTYPES_ADDR_OF_FATPTR(x515);
   int64_t x517 = Int64_val(x514);
   int64_t x520 = Int64_val(x513);
   struct c_dsmat_c* x523 = c_eigen_dsmat_c_transpose(x516, x517, x520);
   return CTYPES_FROM_PTR(x523);
}
value owl_stub_52_c_eigen_dsmat_c_swap_rows(value x528, value x527,
                                            value x526, value x525,
                                            value x524)
{
   float _Complex* x529 = CTYPES_ADDR_OF_FATPTR(x528);
   int64_t x530 = Int64_val(x527);
   int64_t x533 = Int64_val(x526);
   int64_t x536 = Int64_val(x525);
   int64_t x539 = Int64_val(x524);
   c_eigen_dsmat_c_swap_rows(x529, x530, x533, x536, x539);
   return Val_unit;
}
value owl_stub_53_c_eigen_dsmat_c_swap_cols(value x547, value x546,
                                            value x545, value x544,
                                            value x543)
{
   float _Complex* x548 = CTYPES_ADDR_OF_FATPTR(x547);
   int64_t x549 = Int64_val(x546);
   int64_t x552 = Int64_val(x545);
   int64_t x555 = Int64_val(x544);
   int64_t x558 = Int64_val(x543);
   c_eigen_dsmat_c_swap_cols(x548, x549, x552, x555, x558);
   return Val_unit;
}
value owl_stub_54_c_eigen_dsmat_c_rowwise_op(value x566, value x565,
                                             value x564, value x563,
                                             value x562)
{
   int x567 = Long_val(x566);
   float _Complex* x570 = CTYPES_ADDR_OF_FATPTR(x565);
   int64_t x571 = Int64_val(x564);
   int64_t x574 = Int64_val(x563);
   float _Complex* x577 = CTYPES_ADDR_OF_FATPTR(x562);
   c_eigen_dsmat_c_rowwise_op(x567, x570, x571, x574, x577);
   return Val_unit;
}
value owl_stub_55_c_eigen_dsmat_c_colwise_op(value x583, value x582,
                                             value x581, value x580,
                                             value x579)
{
   int x584 = Long_val(x583);
   float _Complex* x587 = CTYPES_ADDR_OF_FATPTR(x582);
   int64_t x588 = Int64_val(x581);
   int64_t x591 = Int64_val(x580);
   float _Complex* x594 = CTYPES_ADDR_OF_FATPTR(x579);
   c_eigen_dsmat_c_colwise_op(x584, x587, x588, x591, x594);
   return Val_unit;
}
value owl_stub_56_c_eigen_dsmat_c_inv(value x598, value x597, value x596)
{
   float _Complex* x599 = CTYPES_ADDR_OF_FATPTR(x598);
   int64_t x600 = Int64_val(x597);
   int64_t x603 = Int64_val(x596);
   struct c_dsmat_c* x606 = c_eigen_dsmat_c_inv(x599, x600, x603);
   return CTYPES_FROM_PTR(x606);
}
value owl_stub_57_c_eigen_dsmat_z_new(value x608, value x607)
{
   int64_t x609 = Int64_val(x608);
   int64_t x612 = Int64_val(x607);
   struct c_dsmat_z* x615 = c_eigen_dsmat_z_new(x609, x612);
   return CTYPES_FROM_PTR(x615);
}
value owl_stub_58_c_eigen_dsmat_z_delete(value x616)
{
   struct c_dsmat_z* x617 = CTYPES_ADDR_OF_FATPTR(x616);
   c_eigen_dsmat_z_delete(x617);
   return Val_unit;
}
value owl_stub_59_c_eigen_dsmat_z_zeros(value x620, value x619)
{
   int64_t x621 = Int64_val(x620);
   int64_t x624 = Int64_val(x619);
   struct c_dsmat_z* x627 = c_eigen_dsmat_z_zeros(x621, x624);
   return CTYPES_FROM_PTR(x627);
}
value owl_stub_60_c_eigen_dsmat_z_ones(value x629, value x628)
{
   int64_t x630 = Int64_val(x629);
   int64_t x633 = Int64_val(x628);
   struct c_dsmat_z* x636 = c_eigen_dsmat_z_ones(x630, x633);
   return CTYPES_FROM_PTR(x636);
}
value owl_stub_61_c_eigen_dsmat_z_eye(value x637)
{
   int64_t x638 = Int64_val(x637);
   struct c_dsmat_z* x641 = c_eigen_dsmat_z_eye(x638);
   return CTYPES_FROM_PTR(x641);
}
value owl_stub_62_c_eigen_dsmat_z_rows(value x642)
{
   struct c_dsmat_z* x643 = CTYPES_ADDR_OF_FATPTR(x642);
   int64_t x644 = c_eigen_dsmat_z_rows(x643);
   return caml_copy_int64(x644);
}
value owl_stub_63_c_eigen_dsmat_z_cols(value x645)
{
   struct c_dsmat_z* x646 = CTYPES_ADDR_OF_FATPTR(x645);
   int64_t x647 = c_eigen_dsmat_z_cols(x646);
   return caml_copy_int64(x647);
}
value owl_stub_64_c_eigen_dsmat_z_get(value x650, value x649, value x648)
{
   struct c_dsmat_z* x651 = CTYPES_ADDR_OF_FATPTR(x650);
   int64_t x652 = Int64_val(x649);
   int64_t x655 = Int64_val(x648);
   double _Complex x658 = c_eigen_dsmat_z_get(x651, x652, x655);
   return ctypes_copy_double_complex(x658);
}
value owl_stub_65_c_eigen_dsmat_z_set(value x662, value x661, value x660,
                                      value x659)
{
   struct c_dsmat_z* x663 = CTYPES_ADDR_OF_FATPTR(x662);
   int64_t x664 = Int64_val(x661);
   int64_t x667 = Int64_val(x660);
   double _Complex x670 = ctypes_double_complex_val(x659);
   c_eigen_dsmat_z_set(x663, x664, x667, x670);
   return Val_unit;
}
value owl_stub_66_c_eigen_dsmat_z_data(value x674)
{
   struct c_dsmat_z* x675 = CTYPES_ADDR_OF_FATPTR(x674);
   double _Complex* x676 = c_eigen_dsmat_z_data(x675);
   return CTYPES_FROM_PTR(x676);
}
value owl_stub_67_c_eigen_dsmat_z_print(value x677)
{
   struct c_dsmat_z* x678 = CTYPES_ADDR_OF_FATPTR(x677);
   c_eigen_dsmat_z_print(x678);
   return Val_unit;
}
value owl_stub_68_c_eigen_dsmat_z_gemm(value x685, value x684, value x683,
                                       value x682, value x681, value x680)
{
   double _Complex* x686 = CTYPES_ADDR_OF_FATPTR(x685);
   int64_t x687 = Int64_val(x684);
   int64_t x690 = Int64_val(x683);
   double _Complex* x693 = CTYPES_ADDR_OF_FATPTR(x682);
   int64_t x694 = Int64_val(x681);
   int64_t x697 = Int64_val(x680);
   struct c_dsmat_z* x700 =
   c_eigen_dsmat_z_gemm(x686, x687, x690, x693, x694, x697);
   return CTYPES_FROM_PTR(x700);
}
value owl_stub_68_c_eigen_dsmat_z_gemm_byte6(value* argv, int argc)
{
   value x701 = argv[5];
   value x702 = argv[4];
   value x703 = argv[3];
   value x704 = argv[2];
   value x705 = argv[1];
   value x706 = argv[0];
   return
     owl_stub_68_c_eigen_dsmat_z_gemm(x706, x705, x704, x703, x702, x701);
}
value owl_stub_69_c_eigen_dsmat_z_transpose(value x709, value x708,
                                            value x707)
{
   double _Complex* x710 = CTYPES_ADDR_OF_FATPTR(x709);
   int64_t x711 = Int64_val(x708);
   int64_t x714 = Int64_val(x707);
   struct c_dsmat_z* x717 = c_eigen_dsmat_z_transpose(x710, x711, x714);
   return CTYPES_FROM_PTR(x717);
}
value owl_stub_70_c_eigen_dsmat_z_swap_rows(value x722, value x721,
                                            value x720, value x719,
                                            value x718)
{
   double _Complex* x723 = CTYPES_ADDR_OF_FATPTR(x722);
   int64_t x724 = Int64_val(x721);
   int64_t x727 = Int64_val(x720);
   int64_t x730 = Int64_val(x719);
   int64_t x733 = Int64_val(x718);
   c_eigen_dsmat_z_swap_rows(x723, x724, x727, x730, x733);
   return Val_unit;
}
value owl_stub_71_c_eigen_dsmat_z_swap_cols(value x741, value x740,
                                            value x739, value x738,
                                            value x737)
{
   double _Complex* x742 = CTYPES_ADDR_OF_FATPTR(x741);
   int64_t x743 = Int64_val(x740);
   int64_t x746 = Int64_val(x739);
   int64_t x749 = Int64_val(x738);
   int64_t x752 = Int64_val(x737);
   c_eigen_dsmat_z_swap_cols(x742, x743, x746, x749, x752);
   return Val_unit;
}
value owl_stub_72_c_eigen_dsmat_z_rowwise_op(value x760, value x759,
                                             value x758, value x757,
                                             value x756)
{
   int x761 = Long_val(x760);
   double _Complex* x764 = CTYPES_ADDR_OF_FATPTR(x759);
   int64_t x765 = Int64_val(x758);
   int64_t x768 = Int64_val(x757);
   double _Complex* x771 = CTYPES_ADDR_OF_FATPTR(x756);
   c_eigen_dsmat_z_rowwise_op(x761, x764, x765, x768, x771);
   return Val_unit;
}
value owl_stub_73_c_eigen_dsmat_z_colwise_op(value x777, value x776,
                                             value x775, value x774,
                                             value x773)
{
   int x778 = Long_val(x777);
   double _Complex* x781 = CTYPES_ADDR_OF_FATPTR(x776);
   int64_t x782 = Int64_val(x775);
   int64_t x785 = Int64_val(x774);
   double _Complex* x788 = CTYPES_ADDR_OF_FATPTR(x773);
   c_eigen_dsmat_z_colwise_op(x778, x781, x782, x785, x788);
   return Val_unit;
}
value owl_stub_74_c_eigen_dsmat_z_inv(value x792, value x791, value x790)
{
   double _Complex* x793 = CTYPES_ADDR_OF_FATPTR(x792);
   int64_t x794 = Int64_val(x791);
   int64_t x797 = Int64_val(x790);
   struct c_dsmat_z* x800 = c_eigen_dsmat_z_inv(x793, x794, x797);
   return CTYPES_FROM_PTR(x800);
}
value owl_stub_75_c_eigen_spmat_s_new(value x803, value x802, value x801)
{
   int64_t x804 = Int64_val(x803);
   int64_t x807 = Int64_val(x802);
   int64_t x810 = Int64_val(x801);
   struct c_spmat_s* x813 = c_eigen_spmat_s_new(x804, x807, x810);
   return CTYPES_FROM_PTR(x813);
}
value owl_stub_76_c_eigen_spmat_s_delete(value x814)
{
   struct c_spmat_s* x815 = CTYPES_ADDR_OF_FATPTR(x814);
   c_eigen_spmat_s_delete(x815);
   return Val_unit;
}
value owl_stub_77_c_eigen_spmat_s_eye(value x817)
{
   int64_t x818 = Int64_val(x817);
   struct c_spmat_s* x821 = c_eigen_spmat_s_eye(x818);
   return CTYPES_FROM_PTR(x821);
}
value owl_stub_78_c_eigen_spmat_s_rows(value x822)
{
   struct c_spmat_s* x823 = CTYPES_ADDR_OF_FATPTR(x822);
   int64_t x824 = c_eigen_spmat_s_rows(x823);
   return caml_copy_int64(x824);
}
value owl_stub_79_c_eigen_spmat_s_cols(value x825)
{
   struct c_spmat_s* x826 = CTYPES_ADDR_OF_FATPTR(x825);
   int64_t x827 = c_eigen_spmat_s_cols(x826);
   return caml_copy_int64(x827);
}
value owl_stub_80_c_eigen_spmat_s_nnz(value x828)
{
   struct c_spmat_s* x829 = CTYPES_ADDR_OF_FATPTR(x828);
   int64_t x830 = c_eigen_spmat_s_nnz(x829);
   return caml_copy_int64(x830);
}
value owl_stub_81_c_eigen_spmat_s_get(value x833, value x832, value x831)
{
   struct c_spmat_s* x834 = CTYPES_ADDR_OF_FATPTR(x833);
   int64_t x835 = Int64_val(x832);
   int64_t x838 = Int64_val(x831);
   float x841 = c_eigen_spmat_s_get(x834, x835, x838);
   return caml_copy_double(x841);
}
value owl_stub_82_c_eigen_spmat_s_set(value x845, value x844, value x843,
                                      value x842)
{
   struct c_spmat_s* x846 = CTYPES_ADDR_OF_FATPTR(x845);
   int64_t x847 = Int64_val(x844);
   int64_t x850 = Int64_val(x843);
   double x853 = Double_val(x842);
   c_eigen_spmat_s_set(x846, x847, x850, (float)x853);
   return Val_unit;
}
value owl_stub_83_c_eigen_spmat_s_insert(value x860, value x859, value x858,
                                         value x857)
{
   struct c_spmat_s* x861 = CTYPES_ADDR_OF_FATPTR(x860);
   int64_t x862 = Int64_val(x859);
   int64_t x865 = Int64_val(x858);
   double x868 = Double_val(x857);
   c_eigen_spmat_s_insert(x861, x862, x865, (float)x868);
   return Val_unit;
}
value owl_stub_84_c_eigen_spmat_s_reset(value x872)
{
   struct c_spmat_s* x873 = CTYPES_ADDR_OF_FATPTR(x872);
   c_eigen_spmat_s_reset(x873);
   return Val_unit;
}
value owl_stub_85_c_eigen_spmat_s_is_compressed(value x875)
{
   struct c_spmat_s* x876 = CTYPES_ADDR_OF_FATPTR(x875);
   int x877 = c_eigen_spmat_s_is_compressed(x876);
   return Val_long(x877);
}
value owl_stub_86_c_eigen_spmat_s_compress(value x878)
{
   struct c_spmat_s* x879 = CTYPES_ADDR_OF_FATPTR(x878);
   c_eigen_spmat_s_compress(x879);
   return Val_unit;
}
value owl_stub_87_c_eigen_spmat_s_uncompress(value x881)
{
   struct c_spmat_s* x882 = CTYPES_ADDR_OF_FATPTR(x881);
   c_eigen_spmat_s_uncompress(x882);
   return Val_unit;
}
value owl_stub_88_c_eigen_spmat_s_reshape(value x886, value x885, value x884)
{
   struct c_spmat_s* x887 = CTYPES_ADDR_OF_FATPTR(x886);
   int64_t x888 = Int64_val(x885);
   int64_t x891 = Int64_val(x884);
   c_eigen_spmat_s_reshape(x887, x888, x891);
   return Val_unit;
}
value owl_stub_89_c_eigen_spmat_s_prune(value x897, value x896, value x895)
{
   struct c_spmat_s* x898 = CTYPES_ADDR_OF_FATPTR(x897);
   double x899 = Double_val(x896);
   double x902 = Double_val(x895);
   c_eigen_spmat_s_prune(x898, (float)x899, (float)x902);
   return Val_unit;
}
value owl_stub_90_c_eigen_spmat_s_valueptr(value x907, value x906)
{
   struct c_spmat_s* x908 = CTYPES_ADDR_OF_FATPTR(x907);
   int64_t* x909 = CTYPES_ADDR_OF_FATPTR(x906);
   float* x910 = c_eigen_spmat_s_valueptr(x908, x909);
   return CTYPES_FROM_PTR(x910);
}
value owl_stub_91_c_eigen_spmat_s_innerindexptr(value x911)
{
   struct c_spmat_s* x912 = CTYPES_ADDR_OF_FATPTR(x911);
   int64_t* x913 = c_eigen_spmat_s_innerindexptr(x912);
   return CTYPES_FROM_PTR(x913);
}
value owl_stub_92_c_eigen_spmat_s_outerindexptr(value x914)
{
   struct c_spmat_s* x915 = CTYPES_ADDR_OF_FATPTR(x914);
   int64_t* x916 = c_eigen_spmat_s_outerindexptr(x915);
   return CTYPES_FROM_PTR(x916);
}
value owl_stub_93_c_eigen_spmat_s_clone(value x917)
{
   struct c_spmat_s* x918 = CTYPES_ADDR_OF_FATPTR(x917);
   struct c_spmat_s* x919 = c_eigen_spmat_s_clone(x918);
   return CTYPES_FROM_PTR(x919);
}
value owl_stub_94_c_eigen_spmat_s_row(value x921, value x920)
{
   struct c_spmat_s* x922 = CTYPES_ADDR_OF_FATPTR(x921);
   int64_t x923 = Int64_val(x920);
   struct c_spmat_s* x926 = c_eigen_spmat_s_row(x922, x923);
   return CTYPES_FROM_PTR(x926);
}
value owl_stub_95_c_eigen_spmat_s_col(value x928, value x927)
{
   struct c_spmat_s* x929 = CTYPES_ADDR_OF_FATPTR(x928);
   int64_t x930 = Int64_val(x927);
   struct c_spmat_s* x933 = c_eigen_spmat_s_col(x929, x930);
   return CTYPES_FROM_PTR(x933);
}
value owl_stub_96_c_eigen_spmat_s_transpose(value x934)
{
   struct c_spmat_s* x935 = CTYPES_ADDR_OF_FATPTR(x934);
   struct c_spmat_s* x936 = c_eigen_spmat_s_transpose(x935);
   return CTYPES_FROM_PTR(x936);
}
value owl_stub_97_c_eigen_spmat_s_adjoint(value x937)
{
   struct c_spmat_s* x938 = CTYPES_ADDR_OF_FATPTR(x937);
   struct c_spmat_s* x939 = c_eigen_spmat_s_adjoint(x938);
   return CTYPES_FROM_PTR(x939);
}
value owl_stub_98_c_eigen_spmat_s_diagonal(value x940)
{
   struct c_spmat_s* x941 = CTYPES_ADDR_OF_FATPTR(x940);
   struct c_spmat_s* x942 = c_eigen_spmat_s_diagonal(x941);
   return CTYPES_FROM_PTR(x942);
}
value owl_stub_99_c_eigen_spmat_s_trace(value x943)
{
   struct c_spmat_s* x944 = CTYPES_ADDR_OF_FATPTR(x943);
   float x945 = c_eigen_spmat_s_trace(x944);
   return caml_copy_double(x945);
}
value owl_stub_100_c_eigen_spmat_s_is_zero(value x946)
{
   struct c_spmat_s* x947 = CTYPES_ADDR_OF_FATPTR(x946);
   int x948 = c_eigen_spmat_s_is_zero(x947);
   return Val_long(x948);
}
value owl_stub_101_c_eigen_spmat_s_is_positive(value x949)
{
   struct c_spmat_s* x950 = CTYPES_ADDR_OF_FATPTR(x949);
   int x951 = c_eigen_spmat_s_is_positive(x950);
   return Val_long(x951);
}
value owl_stub_102_c_eigen_spmat_s_is_negative(value x952)
{
   struct c_spmat_s* x953 = CTYPES_ADDR_OF_FATPTR(x952);
   int x954 = c_eigen_spmat_s_is_negative(x953);
   return Val_long(x954);
}
value owl_stub_103_c_eigen_spmat_s_is_nonpositive(value x955)
{
   struct c_spmat_s* x956 = CTYPES_ADDR_OF_FATPTR(x955);
   int x957 = c_eigen_spmat_s_is_nonpositive(x956);
   return Val_long(x957);
}
value owl_stub_104_c_eigen_spmat_s_is_nonnegative(value x958)
{
   struct c_spmat_s* x959 = CTYPES_ADDR_OF_FATPTR(x958);
   int x960 = c_eigen_spmat_s_is_nonnegative(x959);
   return Val_long(x960);
}
value owl_stub_105_c_eigen_spmat_s_is_equal(value x962, value x961)
{
   struct c_spmat_s* x963 = CTYPES_ADDR_OF_FATPTR(x962);
   struct c_spmat_s* x964 = CTYPES_ADDR_OF_FATPTR(x961);
   int x965 = c_eigen_spmat_s_is_equal(x963, x964);
   return Val_long(x965);
}
value owl_stub_106_c_eigen_spmat_s_is_unequal(value x967, value x966)
{
   struct c_spmat_s* x968 = CTYPES_ADDR_OF_FATPTR(x967);
   struct c_spmat_s* x969 = CTYPES_ADDR_OF_FATPTR(x966);
   int x970 = c_eigen_spmat_s_is_unequal(x968, x969);
   return Val_long(x970);
}
value owl_stub_107_c_eigen_spmat_s_is_greater(value x972, value x971)
{
   struct c_spmat_s* x973 = CTYPES_ADDR_OF_FATPTR(x972);
   struct c_spmat_s* x974 = CTYPES_ADDR_OF_FATPTR(x971);
   int x975 = c_eigen_spmat_s_is_greater(x973, x974);
   return Val_long(x975);
}
value owl_stub_108_c_eigen_spmat_s_is_smaller(value x977, value x976)
{
   struct c_spmat_s* x978 = CTYPES_ADDR_OF_FATPTR(x977);
   struct c_spmat_s* x979 = CTYPES_ADDR_OF_FATPTR(x976);
   int x980 = c_eigen_spmat_s_is_smaller(x978, x979);
   return Val_long(x980);
}
value owl_stub_109_c_eigen_spmat_s_equal_or_greater(value x982, value x981)
{
   struct c_spmat_s* x983 = CTYPES_ADDR_OF_FATPTR(x982);
   struct c_spmat_s* x984 = CTYPES_ADDR_OF_FATPTR(x981);
   int x985 = c_eigen_spmat_s_equal_or_greater(x983, x984);
   return Val_long(x985);
}
value owl_stub_110_c_eigen_spmat_s_equal_or_smaller(value x987, value x986)
{
   struct c_spmat_s* x988 = CTYPES_ADDR_OF_FATPTR(x987);
   struct c_spmat_s* x989 = CTYPES_ADDR_OF_FATPTR(x986);
   int x990 = c_eigen_spmat_s_equal_or_smaller(x988, x989);
   return Val_long(x990);
}
value owl_stub_111_c_eigen_spmat_s_add(value x992, value x991)
{
   struct c_spmat_s* x993 = CTYPES_ADDR_OF_FATPTR(x992);
   struct c_spmat_s* x994 = CTYPES_ADDR_OF_FATPTR(x991);
   struct c_spmat_s* x995 = c_eigen_spmat_s_add(x993, x994);
   return CTYPES_FROM_PTR(x995);
}
value owl_stub_112_c_eigen_spmat_s_sub(value x997, value x996)
{
   struct c_spmat_s* x998 = CTYPES_ADDR_OF_FATPTR(x997);
   struct c_spmat_s* x999 = CTYPES_ADDR_OF_FATPTR(x996);
   struct c_spmat_s* x1000 = c_eigen_spmat_s_sub(x998, x999);
   return CTYPES_FROM_PTR(x1000);
}
value owl_stub_113_c_eigen_spmat_s_mul(value x1002, value x1001)
{
   struct c_spmat_s* x1003 = CTYPES_ADDR_OF_FATPTR(x1002);
   struct c_spmat_s* x1004 = CTYPES_ADDR_OF_FATPTR(x1001);
   struct c_spmat_s* x1005 = c_eigen_spmat_s_mul(x1003, x1004);
   return CTYPES_FROM_PTR(x1005);
}
value owl_stub_114_c_eigen_spmat_s_div(value x1007, value x1006)
{
   struct c_spmat_s* x1008 = CTYPES_ADDR_OF_FATPTR(x1007);
   struct c_spmat_s* x1009 = CTYPES_ADDR_OF_FATPTR(x1006);
   struct c_spmat_s* x1010 = c_eigen_spmat_s_div(x1008, x1009);
   return CTYPES_FROM_PTR(x1010);
}
value owl_stub_115_c_eigen_spmat_s_gemm(value x1012, value x1011)
{
   struct c_spmat_s* x1013 = CTYPES_ADDR_OF_FATPTR(x1012);
   struct c_spmat_s* x1014 = CTYPES_ADDR_OF_FATPTR(x1011);
   struct c_spmat_s* x1015 = c_eigen_spmat_s_gemm(x1013, x1014);
   return CTYPES_FROM_PTR(x1015);
}
value owl_stub_116_c_eigen_spmat_s_add_scalar(value x1017, value x1016)
{
   struct c_spmat_s* x1018 = CTYPES_ADDR_OF_FATPTR(x1017);
   double x1019 = Double_val(x1016);
   struct c_spmat_s* x1022 = c_eigen_spmat_s_add_scalar(x1018, (float)x1019);
   return CTYPES_FROM_PTR(x1022);
}
value owl_stub_117_c_eigen_spmat_s_sub_scalar(value x1024, value x1023)
{
   struct c_spmat_s* x1025 = CTYPES_ADDR_OF_FATPTR(x1024);
   double x1026 = Double_val(x1023);
   struct c_spmat_s* x1029 = c_eigen_spmat_s_sub_scalar(x1025, (float)x1026);
   return CTYPES_FROM_PTR(x1029);
}
value owl_stub_118_c_eigen_spmat_s_mul_scalar(value x1031, value x1030)
{
   struct c_spmat_s* x1032 = CTYPES_ADDR_OF_FATPTR(x1031);
   double x1033 = Double_val(x1030);
   struct c_spmat_s* x1036 = c_eigen_spmat_s_mul_scalar(x1032, (float)x1033);
   return CTYPES_FROM_PTR(x1036);
}
value owl_stub_119_c_eigen_spmat_s_div_scalar(value x1038, value x1037)
{
   struct c_spmat_s* x1039 = CTYPES_ADDR_OF_FATPTR(x1038);
   double x1040 = Double_val(x1037);
   struct c_spmat_s* x1043 = c_eigen_spmat_s_div_scalar(x1039, (float)x1040);
   return CTYPES_FROM_PTR(x1043);
}
value owl_stub_120_c_eigen_spmat_s_min2(value x1045, value x1044)
{
   struct c_spmat_s* x1046 = CTYPES_ADDR_OF_FATPTR(x1045);
   struct c_spmat_s* x1047 = CTYPES_ADDR_OF_FATPTR(x1044);
   struct c_spmat_s* x1048 = c_eigen_spmat_s_min2(x1046, x1047);
   return CTYPES_FROM_PTR(x1048);
}
value owl_stub_121_c_eigen_spmat_s_max2(value x1050, value x1049)
{
   struct c_spmat_s* x1051 = CTYPES_ADDR_OF_FATPTR(x1050);
   struct c_spmat_s* x1052 = CTYPES_ADDR_OF_FATPTR(x1049);
   struct c_spmat_s* x1053 = c_eigen_spmat_s_max2(x1051, x1052);
   return CTYPES_FROM_PTR(x1053);
}
value owl_stub_122_c_eigen_spmat_s_sum(value x1054)
{
   struct c_spmat_s* x1055 = CTYPES_ADDR_OF_FATPTR(x1054);
   float x1056 = c_eigen_spmat_s_sum(x1055);
   return caml_copy_double(x1056);
}
value owl_stub_123_c_eigen_spmat_s_min(value x1057)
{
   struct c_spmat_s* x1058 = CTYPES_ADDR_OF_FATPTR(x1057);
   float x1059 = c_eigen_spmat_s_min(x1058);
   return caml_copy_double(x1059);
}
value owl_stub_124_c_eigen_spmat_s_max(value x1060)
{
   struct c_spmat_s* x1061 = CTYPES_ADDR_OF_FATPTR(x1060);
   float x1062 = c_eigen_spmat_s_max(x1061);
   return caml_copy_double(x1062);
}
value owl_stub_125_c_eigen_spmat_s_abs(value x1063)
{
   struct c_spmat_s* x1064 = CTYPES_ADDR_OF_FATPTR(x1063);
   struct c_spmat_s* x1065 = c_eigen_spmat_s_abs(x1064);
   return CTYPES_FROM_PTR(x1065);
}
value owl_stub_126_c_eigen_spmat_s_neg(value x1066)
{
   struct c_spmat_s* x1067 = CTYPES_ADDR_OF_FATPTR(x1066);
   struct c_spmat_s* x1068 = c_eigen_spmat_s_neg(x1067);
   return CTYPES_FROM_PTR(x1068);
}
value owl_stub_127_c_eigen_spmat_s_sqrt(value x1069)
{
   struct c_spmat_s* x1070 = CTYPES_ADDR_OF_FATPTR(x1069);
   struct c_spmat_s* x1071 = c_eigen_spmat_s_sqrt(x1070);
   return CTYPES_FROM_PTR(x1071);
}
value owl_stub_128_c_eigen_spmat_s_print(value x1072)
{
   struct c_spmat_s* x1073 = CTYPES_ADDR_OF_FATPTR(x1072);
   c_eigen_spmat_s_print(x1073);
   return Val_unit;
}
value owl_stub_129_c_eigen_spmat_d_new(value x1077, value x1076, value x1075)
{
   int64_t x1078 = Int64_val(x1077);
   int64_t x1081 = Int64_val(x1076);
   int64_t x1084 = Int64_val(x1075);
   struct c_spmat_d* x1087 = c_eigen_spmat_d_new(x1078, x1081, x1084);
   return CTYPES_FROM_PTR(x1087);
}
value owl_stub_130_c_eigen_spmat_d_delete(value x1088)
{
   struct c_spmat_d* x1089 = CTYPES_ADDR_OF_FATPTR(x1088);
   c_eigen_spmat_d_delete(x1089);
   return Val_unit;
}
value owl_stub_131_c_eigen_spmat_d_eye(value x1091)
{
   int64_t x1092 = Int64_val(x1091);
   struct c_spmat_d* x1095 = c_eigen_spmat_d_eye(x1092);
   return CTYPES_FROM_PTR(x1095);
}
value owl_stub_132_c_eigen_spmat_d_rows(value x1096)
{
   struct c_spmat_d* x1097 = CTYPES_ADDR_OF_FATPTR(x1096);
   int64_t x1098 = c_eigen_spmat_d_rows(x1097);
   return caml_copy_int64(x1098);
}
value owl_stub_133_c_eigen_spmat_d_cols(value x1099)
{
   struct c_spmat_d* x1100 = CTYPES_ADDR_OF_FATPTR(x1099);
   int64_t x1101 = c_eigen_spmat_d_cols(x1100);
   return caml_copy_int64(x1101);
}
value owl_stub_134_c_eigen_spmat_d_nnz(value x1102)
{
   struct c_spmat_d* x1103 = CTYPES_ADDR_OF_FATPTR(x1102);
   int64_t x1104 = c_eigen_spmat_d_nnz(x1103);
   return caml_copy_int64(x1104);
}
value owl_stub_135_c_eigen_spmat_d_get(value x1107, value x1106, value x1105)
{
   struct c_spmat_d* x1108 = CTYPES_ADDR_OF_FATPTR(x1107);
   int64_t x1109 = Int64_val(x1106);
   int64_t x1112 = Int64_val(x1105);
   double x1115 = c_eigen_spmat_d_get(x1108, x1109, x1112);
   return caml_copy_double(x1115);
}
value owl_stub_136_c_eigen_spmat_d_set(value x1119, value x1118, value x1117,
                                       value x1116)
{
   struct c_spmat_d* x1120 = CTYPES_ADDR_OF_FATPTR(x1119);
   int64_t x1121 = Int64_val(x1118);
   int64_t x1124 = Int64_val(x1117);
   double x1127 = Double_val(x1116);
   c_eigen_spmat_d_set(x1120, x1121, x1124, x1127);
   return Val_unit;
}
value owl_stub_137_c_eigen_spmat_d_insert(value x1134, value x1133,
                                          value x1132, value x1131)
{
   struct c_spmat_d* x1135 = CTYPES_ADDR_OF_FATPTR(x1134);
   int64_t x1136 = Int64_val(x1133);
   int64_t x1139 = Int64_val(x1132);
   double x1142 = Double_val(x1131);
   c_eigen_spmat_d_insert(x1135, x1136, x1139, x1142);
   return Val_unit;
}
value owl_stub_138_c_eigen_spmat_d_reset(value x1146)
{
   struct c_spmat_d* x1147 = CTYPES_ADDR_OF_FATPTR(x1146);
   c_eigen_spmat_d_reset(x1147);
   return Val_unit;
}
value owl_stub_139_c_eigen_spmat_d_is_compressed(value x1149)
{
   struct c_spmat_d* x1150 = CTYPES_ADDR_OF_FATPTR(x1149);
   int x1151 = c_eigen_spmat_d_is_compressed(x1150);
   return Val_long(x1151);
}
value owl_stub_140_c_eigen_spmat_d_compress(value x1152)
{
   struct c_spmat_d* x1153 = CTYPES_ADDR_OF_FATPTR(x1152);
   c_eigen_spmat_d_compress(x1153);
   return Val_unit;
}
value owl_stub_141_c_eigen_spmat_d_uncompress(value x1155)
{
   struct c_spmat_d* x1156 = CTYPES_ADDR_OF_FATPTR(x1155);
   c_eigen_spmat_d_uncompress(x1156);
   return Val_unit;
}
value owl_stub_142_c_eigen_spmat_d_reshape(value x1160, value x1159,
                                           value x1158)
{
   struct c_spmat_d* x1161 = CTYPES_ADDR_OF_FATPTR(x1160);
   int64_t x1162 = Int64_val(x1159);
   int64_t x1165 = Int64_val(x1158);
   c_eigen_spmat_d_reshape(x1161, x1162, x1165);
   return Val_unit;
}
value owl_stub_143_c_eigen_spmat_d_prune(value x1171, value x1170,
                                         value x1169)
{
   struct c_spmat_d* x1172 = CTYPES_ADDR_OF_FATPTR(x1171);
   double x1173 = Double_val(x1170);
   double x1176 = Double_val(x1169);
   c_eigen_spmat_d_prune(x1172, x1173, x1176);
   return Val_unit;
}
value owl_stub_144_c_eigen_spmat_d_valueptr(value x1181, value x1180)
{
   struct c_spmat_d* x1182 = CTYPES_ADDR_OF_FATPTR(x1181);
   int64_t* x1183 = CTYPES_ADDR_OF_FATPTR(x1180);
   double* x1184 = c_eigen_spmat_d_valueptr(x1182, x1183);
   return CTYPES_FROM_PTR(x1184);
}
value owl_stub_145_c_eigen_spmat_d_innerindexptr(value x1185)
{
   struct c_spmat_d* x1186 = CTYPES_ADDR_OF_FATPTR(x1185);
   int64_t* x1187 = c_eigen_spmat_d_innerindexptr(x1186);
   return CTYPES_FROM_PTR(x1187);
}
value owl_stub_146_c_eigen_spmat_d_outerindexptr(value x1188)
{
   struct c_spmat_d* x1189 = CTYPES_ADDR_OF_FATPTR(x1188);
   int64_t* x1190 = c_eigen_spmat_d_outerindexptr(x1189);
   return CTYPES_FROM_PTR(x1190);
}
value owl_stub_147_c_eigen_spmat_d_clone(value x1191)
{
   struct c_spmat_d* x1192 = CTYPES_ADDR_OF_FATPTR(x1191);
   struct c_spmat_d* x1193 = c_eigen_spmat_d_clone(x1192);
   return CTYPES_FROM_PTR(x1193);
}
value owl_stub_148_c_eigen_spmat_d_row(value x1195, value x1194)
{
   struct c_spmat_d* x1196 = CTYPES_ADDR_OF_FATPTR(x1195);
   int64_t x1197 = Int64_val(x1194);
   struct c_spmat_d* x1200 = c_eigen_spmat_d_row(x1196, x1197);
   return CTYPES_FROM_PTR(x1200);
}
value owl_stub_149_c_eigen_spmat_d_col(value x1202, value x1201)
{
   struct c_spmat_d* x1203 = CTYPES_ADDR_OF_FATPTR(x1202);
   int64_t x1204 = Int64_val(x1201);
   struct c_spmat_d* x1207 = c_eigen_spmat_d_col(x1203, x1204);
   return CTYPES_FROM_PTR(x1207);
}
value owl_stub_150_c_eigen_spmat_d_transpose(value x1208)
{
   struct c_spmat_d* x1209 = CTYPES_ADDR_OF_FATPTR(x1208);
   struct c_spmat_d* x1210 = c_eigen_spmat_d_transpose(x1209);
   return CTYPES_FROM_PTR(x1210);
}
value owl_stub_151_c_eigen_spmat_d_adjoint(value x1211)
{
   struct c_spmat_d* x1212 = CTYPES_ADDR_OF_FATPTR(x1211);
   struct c_spmat_d* x1213 = c_eigen_spmat_d_adjoint(x1212);
   return CTYPES_FROM_PTR(x1213);
}
value owl_stub_152_c_eigen_spmat_d_diagonal(value x1214)
{
   struct c_spmat_d* x1215 = CTYPES_ADDR_OF_FATPTR(x1214);
   struct c_spmat_d* x1216 = c_eigen_spmat_d_diagonal(x1215);
   return CTYPES_FROM_PTR(x1216);
}
value owl_stub_153_c_eigen_spmat_d_trace(value x1217)
{
   struct c_spmat_d* x1218 = CTYPES_ADDR_OF_FATPTR(x1217);
   double x1219 = c_eigen_spmat_d_trace(x1218);
   return caml_copy_double(x1219);
}
value owl_stub_154_c_eigen_spmat_d_is_zero(value x1220)
{
   struct c_spmat_d* x1221 = CTYPES_ADDR_OF_FATPTR(x1220);
   int x1222 = c_eigen_spmat_d_is_zero(x1221);
   return Val_long(x1222);
}
value owl_stub_155_c_eigen_spmat_d_is_positive(value x1223)
{
   struct c_spmat_d* x1224 = CTYPES_ADDR_OF_FATPTR(x1223);
   int x1225 = c_eigen_spmat_d_is_positive(x1224);
   return Val_long(x1225);
}
value owl_stub_156_c_eigen_spmat_d_is_negative(value x1226)
{
   struct c_spmat_d* x1227 = CTYPES_ADDR_OF_FATPTR(x1226);
   int x1228 = c_eigen_spmat_d_is_negative(x1227);
   return Val_long(x1228);
}
value owl_stub_157_c_eigen_spmat_d_is_nonpositive(value x1229)
{
   struct c_spmat_d* x1230 = CTYPES_ADDR_OF_FATPTR(x1229);
   int x1231 = c_eigen_spmat_d_is_nonpositive(x1230);
   return Val_long(x1231);
}
value owl_stub_158_c_eigen_spmat_d_is_nonnegative(value x1232)
{
   struct c_spmat_d* x1233 = CTYPES_ADDR_OF_FATPTR(x1232);
   int x1234 = c_eigen_spmat_d_is_nonnegative(x1233);
   return Val_long(x1234);
}
value owl_stub_159_c_eigen_spmat_d_is_equal(value x1236, value x1235)
{
   struct c_spmat_d* x1237 = CTYPES_ADDR_OF_FATPTR(x1236);
   struct c_spmat_d* x1238 = CTYPES_ADDR_OF_FATPTR(x1235);
   int x1239 = c_eigen_spmat_d_is_equal(x1237, x1238);
   return Val_long(x1239);
}
value owl_stub_160_c_eigen_spmat_d_is_unequal(value x1241, value x1240)
{
   struct c_spmat_d* x1242 = CTYPES_ADDR_OF_FATPTR(x1241);
   struct c_spmat_d* x1243 = CTYPES_ADDR_OF_FATPTR(x1240);
   int x1244 = c_eigen_spmat_d_is_unequal(x1242, x1243);
   return Val_long(x1244);
}
value owl_stub_161_c_eigen_spmat_d_is_greater(value x1246, value x1245)
{
   struct c_spmat_d* x1247 = CTYPES_ADDR_OF_FATPTR(x1246);
   struct c_spmat_d* x1248 = CTYPES_ADDR_OF_FATPTR(x1245);
   int x1249 = c_eigen_spmat_d_is_greater(x1247, x1248);
   return Val_long(x1249);
}
value owl_stub_162_c_eigen_spmat_d_is_smaller(value x1251, value x1250)
{
   struct c_spmat_d* x1252 = CTYPES_ADDR_OF_FATPTR(x1251);
   struct c_spmat_d* x1253 = CTYPES_ADDR_OF_FATPTR(x1250);
   int x1254 = c_eigen_spmat_d_is_smaller(x1252, x1253);
   return Val_long(x1254);
}
value owl_stub_163_c_eigen_spmat_d_equal_or_greater(value x1256, value x1255)
{
   struct c_spmat_d* x1257 = CTYPES_ADDR_OF_FATPTR(x1256);
   struct c_spmat_d* x1258 = CTYPES_ADDR_OF_FATPTR(x1255);
   int x1259 = c_eigen_spmat_d_equal_or_greater(x1257, x1258);
   return Val_long(x1259);
}
value owl_stub_164_c_eigen_spmat_d_equal_or_smaller(value x1261, value x1260)
{
   struct c_spmat_d* x1262 = CTYPES_ADDR_OF_FATPTR(x1261);
   struct c_spmat_d* x1263 = CTYPES_ADDR_OF_FATPTR(x1260);
   int x1264 = c_eigen_spmat_d_equal_or_smaller(x1262, x1263);
   return Val_long(x1264);
}
value owl_stub_165_c_eigen_spmat_d_add(value x1266, value x1265)
{
   struct c_spmat_d* x1267 = CTYPES_ADDR_OF_FATPTR(x1266);
   struct c_spmat_d* x1268 = CTYPES_ADDR_OF_FATPTR(x1265);
   struct c_spmat_d* x1269 = c_eigen_spmat_d_add(x1267, x1268);
   return CTYPES_FROM_PTR(x1269);
}
value owl_stub_166_c_eigen_spmat_d_sub(value x1271, value x1270)
{
   struct c_spmat_d* x1272 = CTYPES_ADDR_OF_FATPTR(x1271);
   struct c_spmat_d* x1273 = CTYPES_ADDR_OF_FATPTR(x1270);
   struct c_spmat_d* x1274 = c_eigen_spmat_d_sub(x1272, x1273);
   return CTYPES_FROM_PTR(x1274);
}
value owl_stub_167_c_eigen_spmat_d_mul(value x1276, value x1275)
{
   struct c_spmat_d* x1277 = CTYPES_ADDR_OF_FATPTR(x1276);
   struct c_spmat_d* x1278 = CTYPES_ADDR_OF_FATPTR(x1275);
   struct c_spmat_d* x1279 = c_eigen_spmat_d_mul(x1277, x1278);
   return CTYPES_FROM_PTR(x1279);
}
value owl_stub_168_c_eigen_spmat_d_div(value x1281, value x1280)
{
   struct c_spmat_d* x1282 = CTYPES_ADDR_OF_FATPTR(x1281);
   struct c_spmat_d* x1283 = CTYPES_ADDR_OF_FATPTR(x1280);
   struct c_spmat_d* x1284 = c_eigen_spmat_d_div(x1282, x1283);
   return CTYPES_FROM_PTR(x1284);
}
value owl_stub_169_c_eigen_spmat_d_gemm(value x1286, value x1285)
{
   struct c_spmat_d* x1287 = CTYPES_ADDR_OF_FATPTR(x1286);
   struct c_spmat_d* x1288 = CTYPES_ADDR_OF_FATPTR(x1285);
   struct c_spmat_d* x1289 = c_eigen_spmat_d_gemm(x1287, x1288);
   return CTYPES_FROM_PTR(x1289);
}
value owl_stub_170_c_eigen_spmat_d_add_scalar(value x1291, value x1290)
{
   struct c_spmat_d* x1292 = CTYPES_ADDR_OF_FATPTR(x1291);
   double x1293 = Double_val(x1290);
   struct c_spmat_d* x1296 = c_eigen_spmat_d_add_scalar(x1292, x1293);
   return CTYPES_FROM_PTR(x1296);
}
value owl_stub_171_c_eigen_spmat_d_sub_scalar(value x1298, value x1297)
{
   struct c_spmat_d* x1299 = CTYPES_ADDR_OF_FATPTR(x1298);
   double x1300 = Double_val(x1297);
   struct c_spmat_d* x1303 = c_eigen_spmat_d_sub_scalar(x1299, x1300);
   return CTYPES_FROM_PTR(x1303);
}
value owl_stub_172_c_eigen_spmat_d_mul_scalar(value x1305, value x1304)
{
   struct c_spmat_d* x1306 = CTYPES_ADDR_OF_FATPTR(x1305);
   double x1307 = Double_val(x1304);
   struct c_spmat_d* x1310 = c_eigen_spmat_d_mul_scalar(x1306, x1307);
   return CTYPES_FROM_PTR(x1310);
}
value owl_stub_173_c_eigen_spmat_d_div_scalar(value x1312, value x1311)
{
   struct c_spmat_d* x1313 = CTYPES_ADDR_OF_FATPTR(x1312);
   double x1314 = Double_val(x1311);
   struct c_spmat_d* x1317 = c_eigen_spmat_d_div_scalar(x1313, x1314);
   return CTYPES_FROM_PTR(x1317);
}
value owl_stub_174_c_eigen_spmat_d_min2(value x1319, value x1318)
{
   struct c_spmat_d* x1320 = CTYPES_ADDR_OF_FATPTR(x1319);
   struct c_spmat_d* x1321 = CTYPES_ADDR_OF_FATPTR(x1318);
   struct c_spmat_d* x1322 = c_eigen_spmat_d_min2(x1320, x1321);
   return CTYPES_FROM_PTR(x1322);
}
value owl_stub_175_c_eigen_spmat_d_max2(value x1324, value x1323)
{
   struct c_spmat_d* x1325 = CTYPES_ADDR_OF_FATPTR(x1324);
   struct c_spmat_d* x1326 = CTYPES_ADDR_OF_FATPTR(x1323);
   struct c_spmat_d* x1327 = c_eigen_spmat_d_max2(x1325, x1326);
   return CTYPES_FROM_PTR(x1327);
}
value owl_stub_176_c_eigen_spmat_d_sum(value x1328)
{
   struct c_spmat_d* x1329 = CTYPES_ADDR_OF_FATPTR(x1328);
   double x1330 = c_eigen_spmat_d_sum(x1329);
   return caml_copy_double(x1330);
}
value owl_stub_177_c_eigen_spmat_d_min(value x1331)
{
   struct c_spmat_d* x1332 = CTYPES_ADDR_OF_FATPTR(x1331);
   double x1333 = c_eigen_spmat_d_min(x1332);
   return caml_copy_double(x1333);
}
value owl_stub_178_c_eigen_spmat_d_max(value x1334)
{
   struct c_spmat_d* x1335 = CTYPES_ADDR_OF_FATPTR(x1334);
   double x1336 = c_eigen_spmat_d_max(x1335);
   return caml_copy_double(x1336);
}
value owl_stub_179_c_eigen_spmat_d_abs(value x1337)
{
   struct c_spmat_d* x1338 = CTYPES_ADDR_OF_FATPTR(x1337);
   struct c_spmat_d* x1339 = c_eigen_spmat_d_abs(x1338);
   return CTYPES_FROM_PTR(x1339);
}
value owl_stub_180_c_eigen_spmat_d_neg(value x1340)
{
   struct c_spmat_d* x1341 = CTYPES_ADDR_OF_FATPTR(x1340);
   struct c_spmat_d* x1342 = c_eigen_spmat_d_neg(x1341);
   return CTYPES_FROM_PTR(x1342);
}
value owl_stub_181_c_eigen_spmat_d_sqrt(value x1343)
{
   struct c_spmat_d* x1344 = CTYPES_ADDR_OF_FATPTR(x1343);
   struct c_spmat_d* x1345 = c_eigen_spmat_d_sqrt(x1344);
   return CTYPES_FROM_PTR(x1345);
}
value owl_stub_182_c_eigen_spmat_d_print(value x1346)
{
   struct c_spmat_d* x1347 = CTYPES_ADDR_OF_FATPTR(x1346);
   c_eigen_spmat_d_print(x1347);
   return Val_unit;
}
value owl_stub_183_c_eigen_spmat_c_new(value x1351, value x1350, value x1349)
{
   int64_t x1352 = Int64_val(x1351);
   int64_t x1355 = Int64_val(x1350);
   int64_t x1358 = Int64_val(x1349);
   struct c_spmat_c* x1361 = c_eigen_spmat_c_new(x1352, x1355, x1358);
   return CTYPES_FROM_PTR(x1361);
}
value owl_stub_184_c_eigen_spmat_c_delete(value x1362)
{
   struct c_spmat_c* x1363 = CTYPES_ADDR_OF_FATPTR(x1362);
   c_eigen_spmat_c_delete(x1363);
   return Val_unit;
}
value owl_stub_185_c_eigen_spmat_c_eye(value x1365)
{
   int64_t x1366 = Int64_val(x1365);
   struct c_spmat_c* x1369 = c_eigen_spmat_c_eye(x1366);
   return CTYPES_FROM_PTR(x1369);
}
value owl_stub_186_c_eigen_spmat_c_rows(value x1370)
{
   struct c_spmat_c* x1371 = CTYPES_ADDR_OF_FATPTR(x1370);
   int64_t x1372 = c_eigen_spmat_c_rows(x1371);
   return caml_copy_int64(x1372);
}
value owl_stub_187_c_eigen_spmat_c_cols(value x1373)
{
   struct c_spmat_c* x1374 = CTYPES_ADDR_OF_FATPTR(x1373);
   int64_t x1375 = c_eigen_spmat_c_cols(x1374);
   return caml_copy_int64(x1375);
}
value owl_stub_188_c_eigen_spmat_c_nnz(value x1376)
{
   struct c_spmat_c* x1377 = CTYPES_ADDR_OF_FATPTR(x1376);
   int64_t x1378 = c_eigen_spmat_c_nnz(x1377);
   return caml_copy_int64(x1378);
}
value owl_stub_189_c_eigen_spmat_c_get(value x1381, value x1380, value x1379)
{
   struct c_spmat_c* x1382 = CTYPES_ADDR_OF_FATPTR(x1381);
   int64_t x1383 = Int64_val(x1380);
   int64_t x1386 = Int64_val(x1379);
   float _Complex x1389 = c_eigen_spmat_c_get(x1382, x1383, x1386);
   return ctypes_copy_float_complex(x1389);
}
value owl_stub_190_c_eigen_spmat_c_set(value x1393, value x1392, value x1391,
                                       value x1390)
{
   struct c_spmat_c* x1394 = CTYPES_ADDR_OF_FATPTR(x1393);
   int64_t x1395 = Int64_val(x1392);
   int64_t x1398 = Int64_val(x1391);
   float _Complex x1401 = ctypes_float_complex_val(x1390);
   c_eigen_spmat_c_set(x1394, x1395, x1398, x1401);
   return Val_unit;
}
value owl_stub_191_c_eigen_spmat_c_insert(value x1408, value x1407,
                                          value x1406, value x1405)
{
   struct c_spmat_c* x1409 = CTYPES_ADDR_OF_FATPTR(x1408);
   int64_t x1410 = Int64_val(x1407);
   int64_t x1413 = Int64_val(x1406);
   float _Complex x1416 = ctypes_float_complex_val(x1405);
   c_eigen_spmat_c_insert(x1409, x1410, x1413, x1416);
   return Val_unit;
}
value owl_stub_192_c_eigen_spmat_c_reset(value x1420)
{
   struct c_spmat_c* x1421 = CTYPES_ADDR_OF_FATPTR(x1420);
   c_eigen_spmat_c_reset(x1421);
   return Val_unit;
}
value owl_stub_193_c_eigen_spmat_c_is_compressed(value x1423)
{
   struct c_spmat_c* x1424 = CTYPES_ADDR_OF_FATPTR(x1423);
   int x1425 = c_eigen_spmat_c_is_compressed(x1424);
   return Val_long(x1425);
}
value owl_stub_194_c_eigen_spmat_c_compress(value x1426)
{
   struct c_spmat_c* x1427 = CTYPES_ADDR_OF_FATPTR(x1426);
   c_eigen_spmat_c_compress(x1427);
   return Val_unit;
}
value owl_stub_195_c_eigen_spmat_c_uncompress(value x1429)
{
   struct c_spmat_c* x1430 = CTYPES_ADDR_OF_FATPTR(x1429);
   c_eigen_spmat_c_uncompress(x1430);
   return Val_unit;
}
value owl_stub_196_c_eigen_spmat_c_reshape(value x1434, value x1433,
                                           value x1432)
{
   struct c_spmat_c* x1435 = CTYPES_ADDR_OF_FATPTR(x1434);
   int64_t x1436 = Int64_val(x1433);
   int64_t x1439 = Int64_val(x1432);
   c_eigen_spmat_c_reshape(x1435, x1436, x1439);
   return Val_unit;
}
value owl_stub_197_c_eigen_spmat_c_prune(value x1445, value x1444,
                                         value x1443)
{
   struct c_spmat_c* x1446 = CTYPES_ADDR_OF_FATPTR(x1445);
   float _Complex x1447 = ctypes_float_complex_val(x1444);
   double x1450 = Double_val(x1443);
   c_eigen_spmat_c_prune(x1446, x1447, (float)x1450);
   return Val_unit;
}
value owl_stub_198_c_eigen_spmat_c_valueptr(value x1455, value x1454)
{
   struct c_spmat_c* x1456 = CTYPES_ADDR_OF_FATPTR(x1455);
   int64_t* x1457 = CTYPES_ADDR_OF_FATPTR(x1454);
   float _Complex* x1458 = c_eigen_spmat_c_valueptr(x1456, x1457);
   return CTYPES_FROM_PTR(x1458);
}
value owl_stub_199_c_eigen_spmat_c_innerindexptr(value x1459)
{
   struct c_spmat_c* x1460 = CTYPES_ADDR_OF_FATPTR(x1459);
   int64_t* x1461 = c_eigen_spmat_c_innerindexptr(x1460);
   return CTYPES_FROM_PTR(x1461);
}
value owl_stub_200_c_eigen_spmat_c_outerindexptr(value x1462)
{
   struct c_spmat_c* x1463 = CTYPES_ADDR_OF_FATPTR(x1462);
   int64_t* x1464 = c_eigen_spmat_c_outerindexptr(x1463);
   return CTYPES_FROM_PTR(x1464);
}
value owl_stub_201_c_eigen_spmat_c_clone(value x1465)
{
   struct c_spmat_c* x1466 = CTYPES_ADDR_OF_FATPTR(x1465);
   struct c_spmat_c* x1467 = c_eigen_spmat_c_clone(x1466);
   return CTYPES_FROM_PTR(x1467);
}
value owl_stub_202_c_eigen_spmat_c_row(value x1469, value x1468)
{
   struct c_spmat_c* x1470 = CTYPES_ADDR_OF_FATPTR(x1469);
   int64_t x1471 = Int64_val(x1468);
   struct c_spmat_c* x1474 = c_eigen_spmat_c_row(x1470, x1471);
   return CTYPES_FROM_PTR(x1474);
}
value owl_stub_203_c_eigen_spmat_c_col(value x1476, value x1475)
{
   struct c_spmat_c* x1477 = CTYPES_ADDR_OF_FATPTR(x1476);
   int64_t x1478 = Int64_val(x1475);
   struct c_spmat_c* x1481 = c_eigen_spmat_c_col(x1477, x1478);
   return CTYPES_FROM_PTR(x1481);
}
value owl_stub_204_c_eigen_spmat_c_transpose(value x1482)
{
   struct c_spmat_c* x1483 = CTYPES_ADDR_OF_FATPTR(x1482);
   struct c_spmat_c* x1484 = c_eigen_spmat_c_transpose(x1483);
   return CTYPES_FROM_PTR(x1484);
}
value owl_stub_205_c_eigen_spmat_c_adjoint(value x1485)
{
   struct c_spmat_c* x1486 = CTYPES_ADDR_OF_FATPTR(x1485);
   struct c_spmat_c* x1487 = c_eigen_spmat_c_adjoint(x1486);
   return CTYPES_FROM_PTR(x1487);
}
value owl_stub_206_c_eigen_spmat_c_diagonal(value x1488)
{
   struct c_spmat_c* x1489 = CTYPES_ADDR_OF_FATPTR(x1488);
   struct c_spmat_c* x1490 = c_eigen_spmat_c_diagonal(x1489);
   return CTYPES_FROM_PTR(x1490);
}
value owl_stub_207_c_eigen_spmat_c_trace(value x1491)
{
   struct c_spmat_c* x1492 = CTYPES_ADDR_OF_FATPTR(x1491);
   float _Complex x1493 = c_eigen_spmat_c_trace(x1492);
   return ctypes_copy_float_complex(x1493);
}
value owl_stub_208_c_eigen_spmat_c_is_zero(value x1494)
{
   struct c_spmat_c* x1495 = CTYPES_ADDR_OF_FATPTR(x1494);
   int x1496 = c_eigen_spmat_c_is_zero(x1495);
   return Val_long(x1496);
}
value owl_stub_209_c_eigen_spmat_c_is_positive(value x1497)
{
   struct c_spmat_c* x1498 = CTYPES_ADDR_OF_FATPTR(x1497);
   int x1499 = c_eigen_spmat_c_is_positive(x1498);
   return Val_long(x1499);
}
value owl_stub_210_c_eigen_spmat_c_is_negative(value x1500)
{
   struct c_spmat_c* x1501 = CTYPES_ADDR_OF_FATPTR(x1500);
   int x1502 = c_eigen_spmat_c_is_negative(x1501);
   return Val_long(x1502);
}
value owl_stub_211_c_eigen_spmat_c_is_nonpositive(value x1503)
{
   struct c_spmat_c* x1504 = CTYPES_ADDR_OF_FATPTR(x1503);
   int x1505 = c_eigen_spmat_c_is_nonpositive(x1504);
   return Val_long(x1505);
}
value owl_stub_212_c_eigen_spmat_c_is_nonnegative(value x1506)
{
   struct c_spmat_c* x1507 = CTYPES_ADDR_OF_FATPTR(x1506);
   int x1508 = c_eigen_spmat_c_is_nonnegative(x1507);
   return Val_long(x1508);
}
value owl_stub_213_c_eigen_spmat_c_is_equal(value x1510, value x1509)
{
   struct c_spmat_c* x1511 = CTYPES_ADDR_OF_FATPTR(x1510);
   struct c_spmat_c* x1512 = CTYPES_ADDR_OF_FATPTR(x1509);
   int x1513 = c_eigen_spmat_c_is_equal(x1511, x1512);
   return Val_long(x1513);
}
value owl_stub_214_c_eigen_spmat_c_is_unequal(value x1515, value x1514)
{
   struct c_spmat_c* x1516 = CTYPES_ADDR_OF_FATPTR(x1515);
   struct c_spmat_c* x1517 = CTYPES_ADDR_OF_FATPTR(x1514);
   int x1518 = c_eigen_spmat_c_is_unequal(x1516, x1517);
   return Val_long(x1518);
}
value owl_stub_215_c_eigen_spmat_c_is_greater(value x1520, value x1519)
{
   struct c_spmat_c* x1521 = CTYPES_ADDR_OF_FATPTR(x1520);
   struct c_spmat_c* x1522 = CTYPES_ADDR_OF_FATPTR(x1519);
   int x1523 = c_eigen_spmat_c_is_greater(x1521, x1522);
   return Val_long(x1523);
}
value owl_stub_216_c_eigen_spmat_c_is_smaller(value x1525, value x1524)
{
   struct c_spmat_c* x1526 = CTYPES_ADDR_OF_FATPTR(x1525);
   struct c_spmat_c* x1527 = CTYPES_ADDR_OF_FATPTR(x1524);
   int x1528 = c_eigen_spmat_c_is_smaller(x1526, x1527);
   return Val_long(x1528);
}
value owl_stub_217_c_eigen_spmat_c_equal_or_greater(value x1530, value x1529)
{
   struct c_spmat_c* x1531 = CTYPES_ADDR_OF_FATPTR(x1530);
   struct c_spmat_c* x1532 = CTYPES_ADDR_OF_FATPTR(x1529);
   int x1533 = c_eigen_spmat_c_equal_or_greater(x1531, x1532);
   return Val_long(x1533);
}
value owl_stub_218_c_eigen_spmat_c_equal_or_smaller(value x1535, value x1534)
{
   struct c_spmat_c* x1536 = CTYPES_ADDR_OF_FATPTR(x1535);
   struct c_spmat_c* x1537 = CTYPES_ADDR_OF_FATPTR(x1534);
   int x1538 = c_eigen_spmat_c_equal_or_smaller(x1536, x1537);
   return Val_long(x1538);
}
value owl_stub_219_c_eigen_spmat_c_add(value x1540, value x1539)
{
   struct c_spmat_c* x1541 = CTYPES_ADDR_OF_FATPTR(x1540);
   struct c_spmat_c* x1542 = CTYPES_ADDR_OF_FATPTR(x1539);
   struct c_spmat_c* x1543 = c_eigen_spmat_c_add(x1541, x1542);
   return CTYPES_FROM_PTR(x1543);
}
value owl_stub_220_c_eigen_spmat_c_sub(value x1545, value x1544)
{
   struct c_spmat_c* x1546 = CTYPES_ADDR_OF_FATPTR(x1545);
   struct c_spmat_c* x1547 = CTYPES_ADDR_OF_FATPTR(x1544);
   struct c_spmat_c* x1548 = c_eigen_spmat_c_sub(x1546, x1547);
   return CTYPES_FROM_PTR(x1548);
}
value owl_stub_221_c_eigen_spmat_c_mul(value x1550, value x1549)
{
   struct c_spmat_c* x1551 = CTYPES_ADDR_OF_FATPTR(x1550);
   struct c_spmat_c* x1552 = CTYPES_ADDR_OF_FATPTR(x1549);
   struct c_spmat_c* x1553 = c_eigen_spmat_c_mul(x1551, x1552);
   return CTYPES_FROM_PTR(x1553);
}
value owl_stub_222_c_eigen_spmat_c_div(value x1555, value x1554)
{
   struct c_spmat_c* x1556 = CTYPES_ADDR_OF_FATPTR(x1555);
   struct c_spmat_c* x1557 = CTYPES_ADDR_OF_FATPTR(x1554);
   struct c_spmat_c* x1558 = c_eigen_spmat_c_div(x1556, x1557);
   return CTYPES_FROM_PTR(x1558);
}
value owl_stub_223_c_eigen_spmat_c_gemm(value x1560, value x1559)
{
   struct c_spmat_c* x1561 = CTYPES_ADDR_OF_FATPTR(x1560);
   struct c_spmat_c* x1562 = CTYPES_ADDR_OF_FATPTR(x1559);
   struct c_spmat_c* x1563 = c_eigen_spmat_c_gemm(x1561, x1562);
   return CTYPES_FROM_PTR(x1563);
}
value owl_stub_224_c_eigen_spmat_c_add_scalar(value x1565, value x1564)
{
   struct c_spmat_c* x1566 = CTYPES_ADDR_OF_FATPTR(x1565);
   float _Complex x1567 = ctypes_float_complex_val(x1564);
   struct c_spmat_c* x1570 = c_eigen_spmat_c_add_scalar(x1566, x1567);
   return CTYPES_FROM_PTR(x1570);
}
value owl_stub_225_c_eigen_spmat_c_sub_scalar(value x1572, value x1571)
{
   struct c_spmat_c* x1573 = CTYPES_ADDR_OF_FATPTR(x1572);
   float _Complex x1574 = ctypes_float_complex_val(x1571);
   struct c_spmat_c* x1577 = c_eigen_spmat_c_sub_scalar(x1573, x1574);
   return CTYPES_FROM_PTR(x1577);
}
value owl_stub_226_c_eigen_spmat_c_mul_scalar(value x1579, value x1578)
{
   struct c_spmat_c* x1580 = CTYPES_ADDR_OF_FATPTR(x1579);
   float _Complex x1581 = ctypes_float_complex_val(x1578);
   struct c_spmat_c* x1584 = c_eigen_spmat_c_mul_scalar(x1580, x1581);
   return CTYPES_FROM_PTR(x1584);
}
value owl_stub_227_c_eigen_spmat_c_div_scalar(value x1586, value x1585)
{
   struct c_spmat_c* x1587 = CTYPES_ADDR_OF_FATPTR(x1586);
   float _Complex x1588 = ctypes_float_complex_val(x1585);
   struct c_spmat_c* x1591 = c_eigen_spmat_c_div_scalar(x1587, x1588);
   return CTYPES_FROM_PTR(x1591);
}
value owl_stub_228_c_eigen_spmat_c_sum(value x1592)
{
   struct c_spmat_c* x1593 = CTYPES_ADDR_OF_FATPTR(x1592);
   float _Complex x1594 = c_eigen_spmat_c_sum(x1593);
   return ctypes_copy_float_complex(x1594);
}
value owl_stub_229_c_eigen_spmat_c_neg(value x1595)
{
   struct c_spmat_c* x1596 = CTYPES_ADDR_OF_FATPTR(x1595);
   struct c_spmat_c* x1597 = c_eigen_spmat_c_neg(x1596);
   return CTYPES_FROM_PTR(x1597);
}
value owl_stub_230_c_eigen_spmat_c_sqrt(value x1598)
{
   struct c_spmat_c* x1599 = CTYPES_ADDR_OF_FATPTR(x1598);
   struct c_spmat_c* x1600 = c_eigen_spmat_c_sqrt(x1599);
   return CTYPES_FROM_PTR(x1600);
}
value owl_stub_231_c_eigen_spmat_c_print(value x1601)
{
   struct c_spmat_c* x1602 = CTYPES_ADDR_OF_FATPTR(x1601);
   c_eigen_spmat_c_print(x1602);
   return Val_unit;
}
value owl_stub_232_c_eigen_spmat_z_new(value x1606, value x1605, value x1604)
{
   int64_t x1607 = Int64_val(x1606);
   int64_t x1610 = Int64_val(x1605);
   int64_t x1613 = Int64_val(x1604);
   struct c_spmat_z* x1616 = c_eigen_spmat_z_new(x1607, x1610, x1613);
   return CTYPES_FROM_PTR(x1616);
}
value owl_stub_233_c_eigen_spmat_z_delete(value x1617)
{
   struct c_spmat_z* x1618 = CTYPES_ADDR_OF_FATPTR(x1617);
   c_eigen_spmat_z_delete(x1618);
   return Val_unit;
}
value owl_stub_234_c_eigen_spmat_z_eye(value x1620)
{
   int64_t x1621 = Int64_val(x1620);
   struct c_spmat_z* x1624 = c_eigen_spmat_z_eye(x1621);
   return CTYPES_FROM_PTR(x1624);
}
value owl_stub_235_c_eigen_spmat_z_rows(value x1625)
{
   struct c_spmat_z* x1626 = CTYPES_ADDR_OF_FATPTR(x1625);
   int64_t x1627 = c_eigen_spmat_z_rows(x1626);
   return caml_copy_int64(x1627);
}
value owl_stub_236_c_eigen_spmat_z_cols(value x1628)
{
   struct c_spmat_z* x1629 = CTYPES_ADDR_OF_FATPTR(x1628);
   int64_t x1630 = c_eigen_spmat_z_cols(x1629);
   return caml_copy_int64(x1630);
}
value owl_stub_237_c_eigen_spmat_z_nnz(value x1631)
{
   struct c_spmat_z* x1632 = CTYPES_ADDR_OF_FATPTR(x1631);
   int64_t x1633 = c_eigen_spmat_z_nnz(x1632);
   return caml_copy_int64(x1633);
}
value owl_stub_238_c_eigen_spmat_z_get(value x1636, value x1635, value x1634)
{
   struct c_spmat_z* x1637 = CTYPES_ADDR_OF_FATPTR(x1636);
   int64_t x1638 = Int64_val(x1635);
   int64_t x1641 = Int64_val(x1634);
   double _Complex x1644 = c_eigen_spmat_z_get(x1637, x1638, x1641);
   return ctypes_copy_double_complex(x1644);
}
value owl_stub_239_c_eigen_spmat_z_set(value x1648, value x1647, value x1646,
                                       value x1645)
{
   struct c_spmat_z* x1649 = CTYPES_ADDR_OF_FATPTR(x1648);
   int64_t x1650 = Int64_val(x1647);
   int64_t x1653 = Int64_val(x1646);
   double _Complex x1656 = ctypes_double_complex_val(x1645);
   c_eigen_spmat_z_set(x1649, x1650, x1653, x1656);
   return Val_unit;
}
value owl_stub_240_c_eigen_spmat_z_insert(value x1663, value x1662,
                                          value x1661, value x1660)
{
   struct c_spmat_z* x1664 = CTYPES_ADDR_OF_FATPTR(x1663);
   int64_t x1665 = Int64_val(x1662);
   int64_t x1668 = Int64_val(x1661);
   double _Complex x1671 = ctypes_double_complex_val(x1660);
   c_eigen_spmat_z_insert(x1664, x1665, x1668, x1671);
   return Val_unit;
}
value owl_stub_241_c_eigen_spmat_z_reset(value x1675)
{
   struct c_spmat_z* x1676 = CTYPES_ADDR_OF_FATPTR(x1675);
   c_eigen_spmat_z_reset(x1676);
   return Val_unit;
}
value owl_stub_242_c_eigen_spmat_z_is_compressed(value x1678)
{
   struct c_spmat_z* x1679 = CTYPES_ADDR_OF_FATPTR(x1678);
   int x1680 = c_eigen_spmat_z_is_compressed(x1679);
   return Val_long(x1680);
}
value owl_stub_243_c_eigen_spmat_z_compress(value x1681)
{
   struct c_spmat_z* x1682 = CTYPES_ADDR_OF_FATPTR(x1681);
   c_eigen_spmat_z_compress(x1682);
   return Val_unit;
}
value owl_stub_244_c_eigen_spmat_z_uncompress(value x1684)
{
   struct c_spmat_z* x1685 = CTYPES_ADDR_OF_FATPTR(x1684);
   c_eigen_spmat_z_uncompress(x1685);
   return Val_unit;
}
value owl_stub_245_c_eigen_spmat_z_reshape(value x1689, value x1688,
                                           value x1687)
{
   struct c_spmat_z* x1690 = CTYPES_ADDR_OF_FATPTR(x1689);
   int64_t x1691 = Int64_val(x1688);
   int64_t x1694 = Int64_val(x1687);
   c_eigen_spmat_z_reshape(x1690, x1691, x1694);
   return Val_unit;
}
value owl_stub_246_c_eigen_spmat_z_prune(value x1700, value x1699,
                                         value x1698)
{
   struct c_spmat_z* x1701 = CTYPES_ADDR_OF_FATPTR(x1700);
   double _Complex x1702 = ctypes_double_complex_val(x1699);
   double x1705 = Double_val(x1698);
   c_eigen_spmat_z_prune(x1701, x1702, x1705);
   return Val_unit;
}
value owl_stub_247_c_eigen_spmat_z_valueptr(value x1710, value x1709)
{
   struct c_spmat_z* x1711 = CTYPES_ADDR_OF_FATPTR(x1710);
   int64_t* x1712 = CTYPES_ADDR_OF_FATPTR(x1709);
   double _Complex* x1713 = c_eigen_spmat_z_valueptr(x1711, x1712);
   return CTYPES_FROM_PTR(x1713);
}
value owl_stub_248_c_eigen_spmat_z_innerindexptr(value x1714)
{
   struct c_spmat_z* x1715 = CTYPES_ADDR_OF_FATPTR(x1714);
   int64_t* x1716 = c_eigen_spmat_z_innerindexptr(x1715);
   return CTYPES_FROM_PTR(x1716);
}
value owl_stub_249_c_eigen_spmat_z_outerindexptr(value x1717)
{
   struct c_spmat_z* x1718 = CTYPES_ADDR_OF_FATPTR(x1717);
   int64_t* x1719 = c_eigen_spmat_z_outerindexptr(x1718);
   return CTYPES_FROM_PTR(x1719);
}
value owl_stub_250_c_eigen_spmat_z_clone(value x1720)
{
   struct c_spmat_z* x1721 = CTYPES_ADDR_OF_FATPTR(x1720);
   struct c_spmat_z* x1722 = c_eigen_spmat_z_clone(x1721);
   return CTYPES_FROM_PTR(x1722);
}
value owl_stub_251_c_eigen_spmat_z_row(value x1724, value x1723)
{
   struct c_spmat_z* x1725 = CTYPES_ADDR_OF_FATPTR(x1724);
   int64_t x1726 = Int64_val(x1723);
   struct c_spmat_z* x1729 = c_eigen_spmat_z_row(x1725, x1726);
   return CTYPES_FROM_PTR(x1729);
}
value owl_stub_252_c_eigen_spmat_z_col(value x1731, value x1730)
{
   struct c_spmat_z* x1732 = CTYPES_ADDR_OF_FATPTR(x1731);
   int64_t x1733 = Int64_val(x1730);
   struct c_spmat_z* x1736 = c_eigen_spmat_z_col(x1732, x1733);
   return CTYPES_FROM_PTR(x1736);
}
value owl_stub_253_c_eigen_spmat_z_transpose(value x1737)
{
   struct c_spmat_z* x1738 = CTYPES_ADDR_OF_FATPTR(x1737);
   struct c_spmat_z* x1739 = c_eigen_spmat_z_transpose(x1738);
   return CTYPES_FROM_PTR(x1739);
}
value owl_stub_254_c_eigen_spmat_z_adjoint(value x1740)
{
   struct c_spmat_z* x1741 = CTYPES_ADDR_OF_FATPTR(x1740);
   struct c_spmat_z* x1742 = c_eigen_spmat_z_adjoint(x1741);
   return CTYPES_FROM_PTR(x1742);
}
value owl_stub_255_c_eigen_spmat_z_diagonal(value x1743)
{
   struct c_spmat_z* x1744 = CTYPES_ADDR_OF_FATPTR(x1743);
   struct c_spmat_z* x1745 = c_eigen_spmat_z_diagonal(x1744);
   return CTYPES_FROM_PTR(x1745);
}
value owl_stub_256_c_eigen_spmat_z_trace(value x1746)
{
   struct c_spmat_z* x1747 = CTYPES_ADDR_OF_FATPTR(x1746);
   double _Complex x1748 = c_eigen_spmat_z_trace(x1747);
   return ctypes_copy_double_complex(x1748);
}
value owl_stub_257_c_eigen_spmat_z_is_zero(value x1749)
{
   struct c_spmat_z* x1750 = CTYPES_ADDR_OF_FATPTR(x1749);
   int x1751 = c_eigen_spmat_z_is_zero(x1750);
   return Val_long(x1751);
}
value owl_stub_258_c_eigen_spmat_z_is_positive(value x1752)
{
   struct c_spmat_z* x1753 = CTYPES_ADDR_OF_FATPTR(x1752);
   int x1754 = c_eigen_spmat_z_is_positive(x1753);
   return Val_long(x1754);
}
value owl_stub_259_c_eigen_spmat_z_is_negative(value x1755)
{
   struct c_spmat_z* x1756 = CTYPES_ADDR_OF_FATPTR(x1755);
   int x1757 = c_eigen_spmat_z_is_negative(x1756);
   return Val_long(x1757);
}
value owl_stub_260_c_eigen_spmat_z_is_nonpositive(value x1758)
{
   struct c_spmat_z* x1759 = CTYPES_ADDR_OF_FATPTR(x1758);
   int x1760 = c_eigen_spmat_z_is_nonpositive(x1759);
   return Val_long(x1760);
}
value owl_stub_261_c_eigen_spmat_z_is_nonnegative(value x1761)
{
   struct c_spmat_z* x1762 = CTYPES_ADDR_OF_FATPTR(x1761);
   int x1763 = c_eigen_spmat_z_is_nonnegative(x1762);
   return Val_long(x1763);
}
value owl_stub_262_c_eigen_spmat_z_is_equal(value x1765, value x1764)
{
   struct c_spmat_z* x1766 = CTYPES_ADDR_OF_FATPTR(x1765);
   struct c_spmat_z* x1767 = CTYPES_ADDR_OF_FATPTR(x1764);
   int x1768 = c_eigen_spmat_z_is_equal(x1766, x1767);
   return Val_long(x1768);
}
value owl_stub_263_c_eigen_spmat_z_is_unequal(value x1770, value x1769)
{
   struct c_spmat_z* x1771 = CTYPES_ADDR_OF_FATPTR(x1770);
   struct c_spmat_z* x1772 = CTYPES_ADDR_OF_FATPTR(x1769);
   int x1773 = c_eigen_spmat_z_is_unequal(x1771, x1772);
   return Val_long(x1773);
}
value owl_stub_264_c_eigen_spmat_z_is_greater(value x1775, value x1774)
{
   struct c_spmat_z* x1776 = CTYPES_ADDR_OF_FATPTR(x1775);
   struct c_spmat_z* x1777 = CTYPES_ADDR_OF_FATPTR(x1774);
   int x1778 = c_eigen_spmat_z_is_greater(x1776, x1777);
   return Val_long(x1778);
}
value owl_stub_265_c_eigen_spmat_z_is_smaller(value x1780, value x1779)
{
   struct c_spmat_z* x1781 = CTYPES_ADDR_OF_FATPTR(x1780);
   struct c_spmat_z* x1782 = CTYPES_ADDR_OF_FATPTR(x1779);
   int x1783 = c_eigen_spmat_z_is_smaller(x1781, x1782);
   return Val_long(x1783);
}
value owl_stub_266_c_eigen_spmat_z_equal_or_greater(value x1785, value x1784)
{
   struct c_spmat_z* x1786 = CTYPES_ADDR_OF_FATPTR(x1785);
   struct c_spmat_z* x1787 = CTYPES_ADDR_OF_FATPTR(x1784);
   int x1788 = c_eigen_spmat_z_equal_or_greater(x1786, x1787);
   return Val_long(x1788);
}
value owl_stub_267_c_eigen_spmat_z_equal_or_smaller(value x1790, value x1789)
{
   struct c_spmat_z* x1791 = CTYPES_ADDR_OF_FATPTR(x1790);
   struct c_spmat_z* x1792 = CTYPES_ADDR_OF_FATPTR(x1789);
   int x1793 = c_eigen_spmat_z_equal_or_smaller(x1791, x1792);
   return Val_long(x1793);
}
value owl_stub_268_c_eigen_spmat_z_add(value x1795, value x1794)
{
   struct c_spmat_z* x1796 = CTYPES_ADDR_OF_FATPTR(x1795);
   struct c_spmat_z* x1797 = CTYPES_ADDR_OF_FATPTR(x1794);
   struct c_spmat_z* x1798 = c_eigen_spmat_z_add(x1796, x1797);
   return CTYPES_FROM_PTR(x1798);
}
value owl_stub_269_c_eigen_spmat_z_sub(value x1800, value x1799)
{
   struct c_spmat_z* x1801 = CTYPES_ADDR_OF_FATPTR(x1800);
   struct c_spmat_z* x1802 = CTYPES_ADDR_OF_FATPTR(x1799);
   struct c_spmat_z* x1803 = c_eigen_spmat_z_sub(x1801, x1802);
   return CTYPES_FROM_PTR(x1803);
}
value owl_stub_270_c_eigen_spmat_z_mul(value x1805, value x1804)
{
   struct c_spmat_z* x1806 = CTYPES_ADDR_OF_FATPTR(x1805);
   struct c_spmat_z* x1807 = CTYPES_ADDR_OF_FATPTR(x1804);
   struct c_spmat_z* x1808 = c_eigen_spmat_z_mul(x1806, x1807);
   return CTYPES_FROM_PTR(x1808);
}
value owl_stub_271_c_eigen_spmat_z_div(value x1810, value x1809)
{
   struct c_spmat_z* x1811 = CTYPES_ADDR_OF_FATPTR(x1810);
   struct c_spmat_z* x1812 = CTYPES_ADDR_OF_FATPTR(x1809);
   struct c_spmat_z* x1813 = c_eigen_spmat_z_div(x1811, x1812);
   return CTYPES_FROM_PTR(x1813);
}
value owl_stub_272_c_eigen_spmat_z_gemm(value x1815, value x1814)
{
   struct c_spmat_z* x1816 = CTYPES_ADDR_OF_FATPTR(x1815);
   struct c_spmat_z* x1817 = CTYPES_ADDR_OF_FATPTR(x1814);
   struct c_spmat_z* x1818 = c_eigen_spmat_z_gemm(x1816, x1817);
   return CTYPES_FROM_PTR(x1818);
}
value owl_stub_273_c_eigen_spmat_z_add_scalar(value x1820, value x1819)
{
   struct c_spmat_z* x1821 = CTYPES_ADDR_OF_FATPTR(x1820);
   double _Complex x1822 = ctypes_double_complex_val(x1819);
   struct c_spmat_z* x1825 = c_eigen_spmat_z_add_scalar(x1821, x1822);
   return CTYPES_FROM_PTR(x1825);
}
value owl_stub_274_c_eigen_spmat_z_sub_scalar(value x1827, value x1826)
{
   struct c_spmat_z* x1828 = CTYPES_ADDR_OF_FATPTR(x1827);
   double _Complex x1829 = ctypes_double_complex_val(x1826);
   struct c_spmat_z* x1832 = c_eigen_spmat_z_sub_scalar(x1828, x1829);
   return CTYPES_FROM_PTR(x1832);
}
value owl_stub_275_c_eigen_spmat_z_mul_scalar(value x1834, value x1833)
{
   struct c_spmat_z* x1835 = CTYPES_ADDR_OF_FATPTR(x1834);
   double _Complex x1836 = ctypes_double_complex_val(x1833);
   struct c_spmat_z* x1839 = c_eigen_spmat_z_mul_scalar(x1835, x1836);
   return CTYPES_FROM_PTR(x1839);
}
value owl_stub_276_c_eigen_spmat_z_div_scalar(value x1841, value x1840)
{
   struct c_spmat_z* x1842 = CTYPES_ADDR_OF_FATPTR(x1841);
   double _Complex x1843 = ctypes_double_complex_val(x1840);
   struct c_spmat_z* x1846 = c_eigen_spmat_z_div_scalar(x1842, x1843);
   return CTYPES_FROM_PTR(x1846);
}
value owl_stub_277_c_eigen_spmat_z_sum(value x1847)
{
   struct c_spmat_z* x1848 = CTYPES_ADDR_OF_FATPTR(x1847);
   double _Complex x1849 = c_eigen_spmat_z_sum(x1848);
   return ctypes_copy_double_complex(x1849);
}
value owl_stub_278_c_eigen_spmat_z_neg(value x1850)
{
   struct c_spmat_z* x1851 = CTYPES_ADDR_OF_FATPTR(x1850);
   struct c_spmat_z* x1852 = c_eigen_spmat_z_neg(x1851);
   return CTYPES_FROM_PTR(x1852);
}
value owl_stub_279_c_eigen_spmat_z_sqrt(value x1853)
{
   struct c_spmat_z* x1854 = CTYPES_ADDR_OF_FATPTR(x1853);
   struct c_spmat_z* x1855 = c_eigen_spmat_z_sqrt(x1854);
   return CTYPES_FROM_PTR(x1855);
}
value owl_stub_280_c_eigen_spmat_z_print(value x1856)
{
   struct c_spmat_z* x1857 = CTYPES_ADDR_OF_FATPTR(x1856);
   c_eigen_spmat_z_print(x1857);
   return Val_unit;
}
value owl_stub_281_c_eigen_tensor_s_test(value x1859)
{
   float* x1860 = CTYPES_ADDR_OF_FATPTR(x1859);
   c_eigen_tensor_s_test(x1860);
   return Val_unit;
}
value owl_stub_282_c_eigen_tensor_s_spatial_conv(value x1878, value x1877,
                                                 value x1876, value x1875,
                                                 value x1874, value x1873,
                                                 value x1872, value x1871,
                                                 value x1870, value x1869,
                                                 value x1868, value x1867,
                                                 value x1866, value x1865,
                                                 value x1864, value x1863,
                                                 value x1862)
{
   float* x1879 = CTYPES_ADDR_OF_FATPTR(x1878);
   float* x1880 = CTYPES_ADDR_OF_FATPTR(x1877);
   float* x1881 = CTYPES_ADDR_OF_FATPTR(x1876);
   int x1882 = Long_val(x1875);
   int x1885 = Long_val(x1874);
   int x1888 = Long_val(x1873);
   int x1891 = Long_val(x1872);
   int x1894 = Long_val(x1871);
   int x1897 = Long_val(x1870);
   int x1900 = Long_val(x1869);
   int x1903 = Long_val(x1868);
   int x1906 = Long_val(x1867);
   int x1909 = Long_val(x1866);
   int x1912 = Long_val(x1865);
   int x1915 = Long_val(x1864);
   int x1918 = Long_val(x1863);
   int x1921 = Long_val(x1862);
   c_eigen_tensor_s_spatial_conv(x1879, x1880, x1881, x1882, x1885, x1888,
                                 x1891, x1894, x1897, x1900, x1903, x1906,
                                 x1909, x1912, x1915, x1918, x1921);
   return Val_unit;
}
value owl_stub_282_c_eigen_tensor_s_spatial_conv_byte17(value* argv,
                                                        int argc)
{
   value x1925 = argv[16];
   value x1926 = argv[15];
   value x1927 = argv[14];
   value x1928 = argv[13];
   value x1929 = argv[12];
   value x1930 = argv[11];
   value x1931 = argv[10];
   value x1932 = argv[9];
   value x1933 = argv[8];
   value x1934 = argv[7];
   value x1935 = argv[6];
   value x1936 = argv[5];
   value x1937 = argv[4];
   value x1938 = argv[3];
   value x1939 = argv[2];
   value x1940 = argv[1];
   value x1941 = argv[0];
   return
     owl_stub_282_c_eigen_tensor_s_spatial_conv(x1941, x1940, x1939, 
                                                x1938, x1937, x1936, 
                                                x1935, x1934, x1933, 
                                                x1932, x1931, x1930, 
                                                x1929, x1928, x1927, 
                                                x1926, x1925);
}
value owl_stub_283_c_eigen_tensor_s_spatial_conv_backward_input(value x1957,
                                                                value x1956,
                                                                value x1955,
                                                                value x1954,
                                                                value x1953,
                                                                value x1952,
                                                                value x1951,
                                                                value x1950,
                                                                value x1949,
                                                                value x1948,
                                                                value x1947,
                                                                value x1946,
                                                                value x1945,
                                                                value x1944,
                                                                value x1943,
                                                                value x1942)
{
   float* x1958 = CTYPES_ADDR_OF_FATPTR(x1957);
   float* x1959 = CTYPES_ADDR_OF_FATPTR(x1956);
   float* x1960 = CTYPES_ADDR_OF_FATPTR(x1955);
   int x1961 = Long_val(x1954);
   int x1964 = Long_val(x1953);
   int x1967 = Long_val(x1952);
   int x1970 = Long_val(x1951);
   int x1973 = Long_val(x1950);
   int x1976 = Long_val(x1949);
   int x1979 = Long_val(x1948);
   int x1982 = Long_val(x1947);
   int x1985 = Long_val(x1946);
   int x1988 = Long_val(x1945);
   int x1991 = Long_val(x1944);
   int x1994 = Long_val(x1943);
   int x1997 = Long_val(x1942);
   c_eigen_tensor_s_spatial_conv_backward_input(x1958, x1959, x1960, 
                                                x1961, x1964, x1967, 
                                                x1970, x1973, x1976, 
                                                x1979, x1982, x1985, 
                                                x1988, x1991, x1994, 
                                                x1997);
   return Val_unit;
}
value owl_stub_283_c_eigen_tensor_s_spatial_conv_backward_input_byte16
     (value* argv, int argc)
{
   value x2001 = argv[15];
   value x2002 = argv[14];
   value x2003 = argv[13];
   value x2004 = argv[12];
   value x2005 = argv[11];
   value x2006 = argv[10];
   value x2007 = argv[9];
   value x2008 = argv[8];
   value x2009 = argv[7];
   value x2010 = argv[6];
   value x2011 = argv[5];
   value x2012 = argv[4];
   value x2013 = argv[3];
   value x2014 = argv[2];
   value x2015 = argv[1];
   value x2016 = argv[0];
   return
     owl_stub_283_c_eigen_tensor_s_spatial_conv_backward_input(x2016, 
                                                               x2015, 
                                                               x2014, 
                                                               x2013, 
                                                               x2012, 
                                                               x2011, 
                                                               x2010, 
                                                               x2009, 
                                                               x2008, 
                                                               x2007, 
                                                               x2006, 
                                                               x2005, 
                                                               x2004, 
                                                               x2003, 
                                                               x2002, 
                                                               x2001);
}
value owl_stub_284_c_eigen_tensor_s_spatial_conv_backward_kernel(value x2032,
                                                                 value x2031,
                                                                 value x2030,
                                                                 value x2029,
                                                                 value x2028,
                                                                 value x2027,
                                                                 value x2026,
                                                                 value x2025,
                                                                 value x2024,
                                                                 value x2023,
                                                                 value x2022,
                                                                 value x2021,
                                                                 value x2020,
                                                                 value x2019,
                                                                 value x2018,
                                                                 value x2017)
{
   float* x2033 = CTYPES_ADDR_OF_FATPTR(x2032);
   float* x2034 = CTYPES_ADDR_OF_FATPTR(x2031);
   float* x2035 = CTYPES_ADDR_OF_FATPTR(x2030);
   int x2036 = Long_val(x2029);
   int x2039 = Long_val(x2028);
   int x2042 = Long_val(x2027);
   int x2045 = Long_val(x2026);
   int x2048 = Long_val(x2025);
   int x2051 = Long_val(x2024);
   int x2054 = Long_val(x2023);
   int x2057 = Long_val(x2022);
   int x2060 = Long_val(x2021);
   int x2063 = Long_val(x2020);
   int x2066 = Long_val(x2019);
   int x2069 = Long_val(x2018);
   int x2072 = Long_val(x2017);
   c_eigen_tensor_s_spatial_conv_backward_kernel(x2033, x2034, x2035, 
                                                 x2036, x2039, x2042, 
                                                 x2045, x2048, x2051, 
                                                 x2054, x2057, x2060, 
                                                 x2063, x2066, x2069, 
                                                 x2072);
   return Val_unit;
}
value owl_stub_284_c_eigen_tensor_s_spatial_conv_backward_kernel_byte16
     (value* argv, int argc)
{
   value x2076 = argv[15];
   value x2077 = argv[14];
   value x2078 = argv[13];
   value x2079 = argv[12];
   value x2080 = argv[11];
   value x2081 = argv[10];
   value x2082 = argv[9];
   value x2083 = argv[8];
   value x2084 = argv[7];
   value x2085 = argv[6];
   value x2086 = argv[5];
   value x2087 = argv[4];
   value x2088 = argv[3];
   value x2089 = argv[2];
   value x2090 = argv[1];
   value x2091 = argv[0];
   return
     owl_stub_284_c_eigen_tensor_s_spatial_conv_backward_kernel(x2091, 
                                                                x2090, 
                                                                x2089, 
                                                                x2088, 
                                                                x2087, 
                                                                x2086, 
                                                                x2085, 
                                                                x2084, 
                                                                x2083, 
                                                                x2082, 
                                                                x2081, 
                                                                x2080, 
                                                                x2079, 
                                                                x2078, 
                                                                x2077, 
                                                                x2076);
}
value owl_stub_285_c_eigen_tensor_s_cuboid_conv(value x2110, value x2109,
                                                value x2108, value x2107,
                                                value x2106, value x2105,
                                                value x2104, value x2103,
                                                value x2102, value x2101,
                                                value x2100, value x2099,
                                                value x2098, value x2097,
                                                value x2096, value x2095,
                                                value x2094, value x2093,
                                                value x2092)
{
   float* x2111 = CTYPES_ADDR_OF_FATPTR(x2110);
   float* x2112 = CTYPES_ADDR_OF_FATPTR(x2109);
   float* x2113 = CTYPES_ADDR_OF_FATPTR(x2108);
   int x2114 = Long_val(x2107);
   int x2117 = Long_val(x2106);
   int x2120 = Long_val(x2105);
   int x2123 = Long_val(x2104);
   int x2126 = Long_val(x2103);
   int x2129 = Long_val(x2102);
   int x2132 = Long_val(x2101);
   int x2135 = Long_val(x2100);
   int x2138 = Long_val(x2099);
   int x2141 = Long_val(x2098);
   int x2144 = Long_val(x2097);
   int x2147 = Long_val(x2096);
   int x2150 = Long_val(x2095);
   int x2153 = Long_val(x2094);
   int x2156 = Long_val(x2093);
   int x2159 = Long_val(x2092);
   c_eigen_tensor_s_cuboid_conv(x2111, x2112, x2113, x2114, x2117, x2120,
                                x2123, x2126, x2129, x2132, x2135, x2138,
                                x2141, x2144, x2147, x2150, x2153, x2156,
                                x2159);
   return Val_unit;
}
value owl_stub_285_c_eigen_tensor_s_cuboid_conv_byte19(value* argv, int argc)
{
   value x2163 = argv[18];
   value x2164 = argv[17];
   value x2165 = argv[16];
   value x2166 = argv[15];
   value x2167 = argv[14];
   value x2168 = argv[13];
   value x2169 = argv[12];
   value x2170 = argv[11];
   value x2171 = argv[10];
   value x2172 = argv[9];
   value x2173 = argv[8];
   value x2174 = argv[7];
   value x2175 = argv[6];
   value x2176 = argv[5];
   value x2177 = argv[4];
   value x2178 = argv[3];
   value x2179 = argv[2];
   value x2180 = argv[1];
   value x2181 = argv[0];
   return
     owl_stub_285_c_eigen_tensor_s_cuboid_conv(x2181, x2180, x2179, x2178,
                                               x2177, x2176, x2175, x2174,
                                               x2173, x2172, x2171, x2170,
                                               x2169, x2168, x2167, x2166,
                                               x2165, x2164, x2163);
}
value owl_stub_286_c_eigen_tensor_s_cuboid_conv_backward_input(value x2199,
                                                               value x2198,
                                                               value x2197,
                                                               value x2196,
                                                               value x2195,
                                                               value x2194,
                                                               value x2193,
                                                               value x2192,
                                                               value x2191,
                                                               value x2190,
                                                               value x2189,
                                                               value x2188,
                                                               value x2187,
                                                               value x2186,
                                                               value x2185,
                                                               value x2184,
                                                               value x2183,
                                                               value x2182)
{
   float* x2200 = CTYPES_ADDR_OF_FATPTR(x2199);
   float* x2201 = CTYPES_ADDR_OF_FATPTR(x2198);
   float* x2202 = CTYPES_ADDR_OF_FATPTR(x2197);
   int x2203 = Long_val(x2196);
   int x2206 = Long_val(x2195);
   int x2209 = Long_val(x2194);
   int x2212 = Long_val(x2193);
   int x2215 = Long_val(x2192);
   int x2218 = Long_val(x2191);
   int x2221 = Long_val(x2190);
   int x2224 = Long_val(x2189);
   int x2227 = Long_val(x2188);
   int x2230 = Long_val(x2187);
   int x2233 = Long_val(x2186);
   int x2236 = Long_val(x2185);
   int x2239 = Long_val(x2184);
   int x2242 = Long_val(x2183);
   int x2245 = Long_val(x2182);
   c_eigen_tensor_s_cuboid_conv_backward_input(x2200, x2201, x2202, x2203,
                                               x2206, x2209, x2212, x2215,
                                               x2218, x2221, x2224, x2227,
                                               x2230, x2233, x2236, x2239,
                                               x2242, x2245);
   return Val_unit;
}
value owl_stub_286_c_eigen_tensor_s_cuboid_conv_backward_input_byte18
     (value* argv, int argc)
{
   value x2249 = argv[17];
   value x2250 = argv[16];
   value x2251 = argv[15];
   value x2252 = argv[14];
   value x2253 = argv[13];
   value x2254 = argv[12];
   value x2255 = argv[11];
   value x2256 = argv[10];
   value x2257 = argv[9];
   value x2258 = argv[8];
   value x2259 = argv[7];
   value x2260 = argv[6];
   value x2261 = argv[5];
   value x2262 = argv[4];
   value x2263 = argv[3];
   value x2264 = argv[2];
   value x2265 = argv[1];
   value x2266 = argv[0];
   return
     owl_stub_286_c_eigen_tensor_s_cuboid_conv_backward_input(x2266, 
                                                              x2265, 
                                                              x2264, 
                                                              x2263, 
                                                              x2262, 
                                                              x2261, 
                                                              x2260, 
                                                              x2259, 
                                                              x2258, 
                                                              x2257, 
                                                              x2256, 
                                                              x2255, 
                                                              x2254, 
                                                              x2253, 
                                                              x2252, 
                                                              x2251, 
                                                              x2250, 
                                                              x2249);
}
value owl_stub_287_c_eigen_tensor_s_cuboid_conv_backward_kernel(value x2284,
                                                                value x2283,
                                                                value x2282,
                                                                value x2281,
                                                                value x2280,
                                                                value x2279,
                                                                value x2278,
                                                                value x2277,
                                                                value x2276,
                                                                value x2275,
                                                                value x2274,
                                                                value x2273,
                                                                value x2272,
                                                                value x2271,
                                                                value x2270,
                                                                value x2269,
                                                                value x2268,
                                                                value x2267)
{
   float* x2285 = CTYPES_ADDR_OF_FATPTR(x2284);
   float* x2286 = CTYPES_ADDR_OF_FATPTR(x2283);
   float* x2287 = CTYPES_ADDR_OF_FATPTR(x2282);
   int x2288 = Long_val(x2281);
   int x2291 = Long_val(x2280);
   int x2294 = Long_val(x2279);
   int x2297 = Long_val(x2278);
   int x2300 = Long_val(x2277);
   int x2303 = Long_val(x2276);
   int x2306 = Long_val(x2275);
   int x2309 = Long_val(x2274);
   int x2312 = Long_val(x2273);
   int x2315 = Long_val(x2272);
   int x2318 = Long_val(x2271);
   int x2321 = Long_val(x2270);
   int x2324 = Long_val(x2269);
   int x2327 = Long_val(x2268);
   int x2330 = Long_val(x2267);
   c_eigen_tensor_s_cuboid_conv_backward_kernel(x2285, x2286, x2287, 
                                                x2288, x2291, x2294, 
                                                x2297, x2300, x2303, 
                                                x2306, x2309, x2312, 
                                                x2315, x2318, x2321, 
                                                x2324, x2327, x2330);
   return Val_unit;
}
value owl_stub_287_c_eigen_tensor_s_cuboid_conv_backward_kernel_byte18
     (value* argv, int argc)
{
   value x2334 = argv[17];
   value x2335 = argv[16];
   value x2336 = argv[15];
   value x2337 = argv[14];
   value x2338 = argv[13];
   value x2339 = argv[12];
   value x2340 = argv[11];
   value x2341 = argv[10];
   value x2342 = argv[9];
   value x2343 = argv[8];
   value x2344 = argv[7];
   value x2345 = argv[6];
   value x2346 = argv[5];
   value x2347 = argv[4];
   value x2348 = argv[3];
   value x2349 = argv[2];
   value x2350 = argv[1];
   value x2351 = argv[0];
   return
     owl_stub_287_c_eigen_tensor_s_cuboid_conv_backward_kernel(x2351, 
                                                               x2350, 
                                                               x2349, 
                                                               x2348, 
                                                               x2347, 
                                                               x2346, 
                                                               x2345, 
                                                               x2344, 
                                                               x2343, 
                                                               x2342, 
                                                               x2341, 
                                                               x2340, 
                                                               x2339, 
                                                               x2338, 
                                                               x2337, 
                                                               x2336, 
                                                               x2335, 
                                                               x2334);
}
value owl_stub_288_c_eigen_tensor_s_spatial_max_pooling(value x2366,
                                                        value x2365,
                                                        value x2364,
                                                        value x2363,
                                                        value x2362,
                                                        value x2361,
                                                        value x2360,
                                                        value x2359,
                                                        value x2358,
                                                        value x2357,
                                                        value x2356,
                                                        value x2355,
                                                        value x2354,
                                                        value x2353,
                                                        value x2352)
{
   float* x2367 = CTYPES_ADDR_OF_FATPTR(x2366);
   float* x2368 = CTYPES_ADDR_OF_FATPTR(x2365);
   int x2369 = Long_val(x2364);
   int x2372 = Long_val(x2363);
   int x2375 = Long_val(x2362);
   int x2378 = Long_val(x2361);
   int x2381 = Long_val(x2360);
   int x2384 = Long_val(x2359);
   int x2387 = Long_val(x2358);
   int x2390 = Long_val(x2357);
   int x2393 = Long_val(x2356);
   int x2396 = Long_val(x2355);
   int x2399 = Long_val(x2354);
   int x2402 = Long_val(x2353);
   int x2405 = Long_val(x2352);
   c_eigen_tensor_s_spatial_max_pooling(x2367, x2368, x2369, x2372, x2375,
                                        x2378, x2381, x2384, x2387, x2390,
                                        x2393, x2396, x2399, x2402, x2405);
   return Val_unit;
}
value owl_stub_288_c_eigen_tensor_s_spatial_max_pooling_byte15(value* argv,
                                                               int argc)
{
   value x2409 = argv[14];
   value x2410 = argv[13];
   value x2411 = argv[12];
   value x2412 = argv[11];
   value x2413 = argv[10];
   value x2414 = argv[9];
   value x2415 = argv[8];
   value x2416 = argv[7];
   value x2417 = argv[6];
   value x2418 = argv[5];
   value x2419 = argv[4];
   value x2420 = argv[3];
   value x2421 = argv[2];
   value x2422 = argv[1];
   value x2423 = argv[0];
   return
     owl_stub_288_c_eigen_tensor_s_spatial_max_pooling(x2423, x2422, 
                                                       x2421, x2420, 
                                                       x2419, x2418, 
                                                       x2417, x2416, 
                                                       x2415, x2414, 
                                                       x2413, x2412, 
                                                       x2411, x2410, 
                                                       x2409);
}
value owl_stub_289_c_eigen_tensor_s_spatial_avg_pooling(value x2438,
                                                        value x2437,
                                                        value x2436,
                                                        value x2435,
                                                        value x2434,
                                                        value x2433,
                                                        value x2432,
                                                        value x2431,
                                                        value x2430,
                                                        value x2429,
                                                        value x2428,
                                                        value x2427,
                                                        value x2426,
                                                        value x2425,
                                                        value x2424)
{
   float* x2439 = CTYPES_ADDR_OF_FATPTR(x2438);
   float* x2440 = CTYPES_ADDR_OF_FATPTR(x2437);
   int x2441 = Long_val(x2436);
   int x2444 = Long_val(x2435);
   int x2447 = Long_val(x2434);
   int x2450 = Long_val(x2433);
   int x2453 = Long_val(x2432);
   int x2456 = Long_val(x2431);
   int x2459 = Long_val(x2430);
   int x2462 = Long_val(x2429);
   int x2465 = Long_val(x2428);
   int x2468 = Long_val(x2427);
   int x2471 = Long_val(x2426);
   int x2474 = Long_val(x2425);
   int x2477 = Long_val(x2424);
   c_eigen_tensor_s_spatial_avg_pooling(x2439, x2440, x2441, x2444, x2447,
                                        x2450, x2453, x2456, x2459, x2462,
                                        x2465, x2468, x2471, x2474, x2477);
   return Val_unit;
}
value owl_stub_289_c_eigen_tensor_s_spatial_avg_pooling_byte15(value* argv,
                                                               int argc)
{
   value x2481 = argv[14];
   value x2482 = argv[13];
   value x2483 = argv[12];
   value x2484 = argv[11];
   value x2485 = argv[10];
   value x2486 = argv[9];
   value x2487 = argv[8];
   value x2488 = argv[7];
   value x2489 = argv[6];
   value x2490 = argv[5];
   value x2491 = argv[4];
   value x2492 = argv[3];
   value x2493 = argv[2];
   value x2494 = argv[1];
   value x2495 = argv[0];
   return
     owl_stub_289_c_eigen_tensor_s_spatial_avg_pooling(x2495, x2494, 
                                                       x2493, x2492, 
                                                       x2491, x2490, 
                                                       x2489, x2488, 
                                                       x2487, x2486, 
                                                       x2485, x2484, 
                                                       x2483, x2482, 
                                                       x2481);
}
value owl_stub_290_c_eigen_tensor_s_cuboid_max_pooling(value x2512,
                                                       value x2511,
                                                       value x2510,
                                                       value x2509,
                                                       value x2508,
                                                       value x2507,
                                                       value x2506,
                                                       value x2505,
                                                       value x2504,
                                                       value x2503,
                                                       value x2502,
                                                       value x2501,
                                                       value x2500,
                                                       value x2499,
                                                       value x2498,
                                                       value x2497,
                                                       value x2496)
{
   float* x2513 = CTYPES_ADDR_OF_FATPTR(x2512);
   float* x2514 = CTYPES_ADDR_OF_FATPTR(x2511);
   int x2515 = Long_val(x2510);
   int x2518 = Long_val(x2509);
   int x2521 = Long_val(x2508);
   int x2524 = Long_val(x2507);
   int x2527 = Long_val(x2506);
   int x2530 = Long_val(x2505);
   int x2533 = Long_val(x2504);
   int x2536 = Long_val(x2503);
   int x2539 = Long_val(x2502);
   int x2542 = Long_val(x2501);
   int x2545 = Long_val(x2500);
   int x2548 = Long_val(x2499);
   int x2551 = Long_val(x2498);
   int x2554 = Long_val(x2497);
   int x2557 = Long_val(x2496);
   c_eigen_tensor_s_cuboid_max_pooling(x2513, x2514, x2515, x2518, x2521,
                                       x2524, x2527, x2530, x2533, x2536,
                                       x2539, x2542, x2545, x2548, x2551,
                                       x2554, x2557);
   return Val_unit;
}
value owl_stub_290_c_eigen_tensor_s_cuboid_max_pooling_byte17(value* argv,
                                                              int argc)
{
   value x2561 = argv[16];
   value x2562 = argv[15];
   value x2563 = argv[14];
   value x2564 = argv[13];
   value x2565 = argv[12];
   value x2566 = argv[11];
   value x2567 = argv[10];
   value x2568 = argv[9];
   value x2569 = argv[8];
   value x2570 = argv[7];
   value x2571 = argv[6];
   value x2572 = argv[5];
   value x2573 = argv[4];
   value x2574 = argv[3];
   value x2575 = argv[2];
   value x2576 = argv[1];
   value x2577 = argv[0];
   return
     owl_stub_290_c_eigen_tensor_s_cuboid_max_pooling(x2577, x2576, x2575,
                                                      x2574, x2573, x2572,
                                                      x2571, x2570, x2569,
                                                      x2568, x2567, x2566,
                                                      x2565, x2564, x2563,
                                                      x2562, x2561);
}
value owl_stub_291_c_eigen_tensor_s_cuboid_avg_pooling(value x2594,
                                                       value x2593,
                                                       value x2592,
                                                       value x2591,
                                                       value x2590,
                                                       value x2589,
                                                       value x2588,
                                                       value x2587,
                                                       value x2586,
                                                       value x2585,
                                                       value x2584,
                                                       value x2583,
                                                       value x2582,
                                                       value x2581,
                                                       value x2580,
                                                       value x2579,
                                                       value x2578)
{
   float* x2595 = CTYPES_ADDR_OF_FATPTR(x2594);
   float* x2596 = CTYPES_ADDR_OF_FATPTR(x2593);
   int x2597 = Long_val(x2592);
   int x2600 = Long_val(x2591);
   int x2603 = Long_val(x2590);
   int x2606 = Long_val(x2589);
   int x2609 = Long_val(x2588);
   int x2612 = Long_val(x2587);
   int x2615 = Long_val(x2586);
   int x2618 = Long_val(x2585);
   int x2621 = Long_val(x2584);
   int x2624 = Long_val(x2583);
   int x2627 = Long_val(x2582);
   int x2630 = Long_val(x2581);
   int x2633 = Long_val(x2580);
   int x2636 = Long_val(x2579);
   int x2639 = Long_val(x2578);
   c_eigen_tensor_s_cuboid_avg_pooling(x2595, x2596, x2597, x2600, x2603,
                                       x2606, x2609, x2612, x2615, x2618,
                                       x2621, x2624, x2627, x2630, x2633,
                                       x2636, x2639);
   return Val_unit;
}
value owl_stub_291_c_eigen_tensor_s_cuboid_avg_pooling_byte17(value* argv,
                                                              int argc)
{
   value x2643 = argv[16];
   value x2644 = argv[15];
   value x2645 = argv[14];
   value x2646 = argv[13];
   value x2647 = argv[12];
   value x2648 = argv[11];
   value x2649 = argv[10];
   value x2650 = argv[9];
   value x2651 = argv[8];
   value x2652 = argv[7];
   value x2653 = argv[6];
   value x2654 = argv[5];
   value x2655 = argv[4];
   value x2656 = argv[3];
   value x2657 = argv[2];
   value x2658 = argv[1];
   value x2659 = argv[0];
   return
     owl_stub_291_c_eigen_tensor_s_cuboid_avg_pooling(x2659, x2658, x2657,
                                                      x2656, x2655, x2654,
                                                      x2653, x2652, x2651,
                                                      x2650, x2649, x2648,
                                                      x2647, x2646, x2645,
                                                      x2644, x2643);
}
value owl_stub_292_c_eigen_tensor_s_spatial_max_pooling_argmax(value x2674,
                                                               value x2673,
                                                               value x2672,
                                                               value x2671,
                                                               value x2670,
                                                               value x2669,
                                                               value x2668,
                                                               value x2667,
                                                               value x2666,
                                                               value x2665,
                                                               value x2664,
                                                               value x2663,
                                                               value x2662,
                                                               value x2661,
                                                               value x2660)
{
   float* x2675 = CTYPES_ADDR_OF_FATPTR(x2674);
   float* x2676 = CTYPES_ADDR_OF_FATPTR(x2673);
   int64_t* x2677 = CTYPES_ADDR_OF_FATPTR(x2672);
   int x2678 = Long_val(x2671);
   int x2681 = Long_val(x2670);
   int x2684 = Long_val(x2669);
   int x2687 = Long_val(x2668);
   int x2690 = Long_val(x2667);
   int x2693 = Long_val(x2666);
   int x2696 = Long_val(x2665);
   int x2699 = Long_val(x2664);
   int x2702 = Long_val(x2663);
   int x2705 = Long_val(x2662);
   int x2708 = Long_val(x2661);
   int x2711 = Long_val(x2660);
   c_eigen_tensor_s_spatial_max_pooling_argmax(x2675, x2676, x2677, x2678,
                                               x2681, x2684, x2687, x2690,
                                               x2693, x2696, x2699, x2702,
                                               x2705, x2708, x2711);
   return Val_unit;
}
value owl_stub_292_c_eigen_tensor_s_spatial_max_pooling_argmax_byte15
     (value* argv, int argc)
{
   value x2715 = argv[14];
   value x2716 = argv[13];
   value x2717 = argv[12];
   value x2718 = argv[11];
   value x2719 = argv[10];
   value x2720 = argv[9];
   value x2721 = argv[8];
   value x2722 = argv[7];
   value x2723 = argv[6];
   value x2724 = argv[5];
   value x2725 = argv[4];
   value x2726 = argv[3];
   value x2727 = argv[2];
   value x2728 = argv[1];
   value x2729 = argv[0];
   return
     owl_stub_292_c_eigen_tensor_s_spatial_max_pooling_argmax(x2729, 
                                                              x2728, 
                                                              x2727, 
                                                              x2726, 
                                                              x2725, 
                                                              x2724, 
                                                              x2723, 
                                                              x2722, 
                                                              x2721, 
                                                              x2720, 
                                                              x2719, 
                                                              x2718, 
                                                              x2717, 
                                                              x2716, 
                                                              x2715);
}
value owl_stub_293_c_eigen_tensor_s_spatial_max_pooling_backward(value x2744,
                                                                 value x2743,
                                                                 value x2742,
                                                                 value x2741,
                                                                 value x2740,
                                                                 value x2739,
                                                                 value x2738,
                                                                 value x2737,
                                                                 value x2736,
                                                                 value x2735,
                                                                 value x2734,
                                                                 value x2733,
                                                                 value x2732,
                                                                 value x2731,
                                                                 value x2730)
{
   float* x2745 = CTYPES_ADDR_OF_FATPTR(x2744);
   float* x2746 = CTYPES_ADDR_OF_FATPTR(x2743);
   float* x2747 = CTYPES_ADDR_OF_FATPTR(x2742);
   int x2748 = Long_val(x2741);
   int x2751 = Long_val(x2740);
   int x2754 = Long_val(x2739);
   int x2757 = Long_val(x2738);
   int x2760 = Long_val(x2737);
   int x2763 = Long_val(x2736);
   int x2766 = Long_val(x2735);
   int x2769 = Long_val(x2734);
   int x2772 = Long_val(x2733);
   int x2775 = Long_val(x2732);
   int x2778 = Long_val(x2731);
   int x2781 = Long_val(x2730);
   c_eigen_tensor_s_spatial_max_pooling_backward(x2745, x2746, x2747, 
                                                 x2748, x2751, x2754, 
                                                 x2757, x2760, x2763, 
                                                 x2766, x2769, x2772, 
                                                 x2775, x2778, x2781);
   return Val_unit;
}
value owl_stub_293_c_eigen_tensor_s_spatial_max_pooling_backward_byte15
     (value* argv, int argc)
{
   value x2785 = argv[14];
   value x2786 = argv[13];
   value x2787 = argv[12];
   value x2788 = argv[11];
   value x2789 = argv[10];
   value x2790 = argv[9];
   value x2791 = argv[8];
   value x2792 = argv[7];
   value x2793 = argv[6];
   value x2794 = argv[5];
   value x2795 = argv[4];
   value x2796 = argv[3];
   value x2797 = argv[2];
   value x2798 = argv[1];
   value x2799 = argv[0];
   return
     owl_stub_293_c_eigen_tensor_s_spatial_max_pooling_backward(x2799, 
                                                                x2798, 
                                                                x2797, 
                                                                x2796, 
                                                                x2795, 
                                                                x2794, 
                                                                x2793, 
                                                                x2792, 
                                                                x2791, 
                                                                x2790, 
                                                                x2789, 
                                                                x2788, 
                                                                x2787, 
                                                                x2786, 
                                                                x2785);
}
value owl_stub_294_c_eigen_tensor_s_spatial_avg_pooling_backward(value x2813,
                                                                 value x2812,
                                                                 value x2811,
                                                                 value x2810,
                                                                 value x2809,
                                                                 value x2808,
                                                                 value x2807,
                                                                 value x2806,
                                                                 value x2805,
                                                                 value x2804,
                                                                 value x2803,
                                                                 value x2802,
                                                                 value x2801,
                                                                 value x2800)
{
   float* x2814 = CTYPES_ADDR_OF_FATPTR(x2813);
   float* x2815 = CTYPES_ADDR_OF_FATPTR(x2812);
   int x2816 = Long_val(x2811);
   int x2819 = Long_val(x2810);
   int x2822 = Long_val(x2809);
   int x2825 = Long_val(x2808);
   int x2828 = Long_val(x2807);
   int x2831 = Long_val(x2806);
   int x2834 = Long_val(x2805);
   int x2837 = Long_val(x2804);
   int x2840 = Long_val(x2803);
   int x2843 = Long_val(x2802);
   int x2846 = Long_val(x2801);
   int x2849 = Long_val(x2800);
   c_eigen_tensor_s_spatial_avg_pooling_backward(x2814, x2815, x2816, 
                                                 x2819, x2822, x2825, 
                                                 x2828, x2831, x2834, 
                                                 x2837, x2840, x2843, 
                                                 x2846, x2849);
   return Val_unit;
}
value owl_stub_294_c_eigen_tensor_s_spatial_avg_pooling_backward_byte14
     (value* argv, int argc)
{
   value x2853 = argv[13];
   value x2854 = argv[12];
   value x2855 = argv[11];
   value x2856 = argv[10];
   value x2857 = argv[9];
   value x2858 = argv[8];
   value x2859 = argv[7];
   value x2860 = argv[6];
   value x2861 = argv[5];
   value x2862 = argv[4];
   value x2863 = argv[3];
   value x2864 = argv[2];
   value x2865 = argv[1];
   value x2866 = argv[0];
   return
     owl_stub_294_c_eigen_tensor_s_spatial_avg_pooling_backward(x2866, 
                                                                x2865, 
                                                                x2864, 
                                                                x2863, 
                                                                x2862, 
                                                                x2861, 
                                                                x2860, 
                                                                x2859, 
                                                                x2858, 
                                                                x2857, 
                                                                x2856, 
                                                                x2855, 
                                                                x2854, 
                                                                x2853);
}
value owl_stub_295_c_eigen_tensor_d_test(value x2867)
{
   double* x2868 = CTYPES_ADDR_OF_FATPTR(x2867);
   c_eigen_tensor_d_test(x2868);
   return Val_unit;
}
value owl_stub_296_c_eigen_tensor_d_spatial_conv(value x2886, value x2885,
                                                 value x2884, value x2883,
                                                 value x2882, value x2881,
                                                 value x2880, value x2879,
                                                 value x2878, value x2877,
                                                 value x2876, value x2875,
                                                 value x2874, value x2873,
                                                 value x2872, value x2871,
                                                 value x2870)
{
   double* x2887 = CTYPES_ADDR_OF_FATPTR(x2886);
   double* x2888 = CTYPES_ADDR_OF_FATPTR(x2885);
   double* x2889 = CTYPES_ADDR_OF_FATPTR(x2884);
   int x2890 = Long_val(x2883);
   int x2893 = Long_val(x2882);
   int x2896 = Long_val(x2881);
   int x2899 = Long_val(x2880);
   int x2902 = Long_val(x2879);
   int x2905 = Long_val(x2878);
   int x2908 = Long_val(x2877);
   int x2911 = Long_val(x2876);
   int x2914 = Long_val(x2875);
   int x2917 = Long_val(x2874);
   int x2920 = Long_val(x2873);
   int x2923 = Long_val(x2872);
   int x2926 = Long_val(x2871);
   int x2929 = Long_val(x2870);
   c_eigen_tensor_d_spatial_conv(x2887, x2888, x2889, x2890, x2893, x2896,
                                 x2899, x2902, x2905, x2908, x2911, x2914,
                                 x2917, x2920, x2923, x2926, x2929);
   return Val_unit;
}
value owl_stub_296_c_eigen_tensor_d_spatial_conv_byte17(value* argv,
                                                        int argc)
{
   value x2933 = argv[16];
   value x2934 = argv[15];
   value x2935 = argv[14];
   value x2936 = argv[13];
   value x2937 = argv[12];
   value x2938 = argv[11];
   value x2939 = argv[10];
   value x2940 = argv[9];
   value x2941 = argv[8];
   value x2942 = argv[7];
   value x2943 = argv[6];
   value x2944 = argv[5];
   value x2945 = argv[4];
   value x2946 = argv[3];
   value x2947 = argv[2];
   value x2948 = argv[1];
   value x2949 = argv[0];
   return
     owl_stub_296_c_eigen_tensor_d_spatial_conv(x2949, x2948, x2947, 
                                                x2946, x2945, x2944, 
                                                x2943, x2942, x2941, 
                                                x2940, x2939, x2938, 
                                                x2937, x2936, x2935, 
                                                x2934, x2933);
}
value owl_stub_297_c_eigen_tensor_d_spatial_conv_backward_input(value x2965,
                                                                value x2964,
                                                                value x2963,
                                                                value x2962,
                                                                value x2961,
                                                                value x2960,
                                                                value x2959,
                                                                value x2958,
                                                                value x2957,
                                                                value x2956,
                                                                value x2955,
                                                                value x2954,
                                                                value x2953,
                                                                value x2952,
                                                                value x2951,
                                                                value x2950)
{
   double* x2966 = CTYPES_ADDR_OF_FATPTR(x2965);
   double* x2967 = CTYPES_ADDR_OF_FATPTR(x2964);
   double* x2968 = CTYPES_ADDR_OF_FATPTR(x2963);
   int x2969 = Long_val(x2962);
   int x2972 = Long_val(x2961);
   int x2975 = Long_val(x2960);
   int x2978 = Long_val(x2959);
   int x2981 = Long_val(x2958);
   int x2984 = Long_val(x2957);
   int x2987 = Long_val(x2956);
   int x2990 = Long_val(x2955);
   int x2993 = Long_val(x2954);
   int x2996 = Long_val(x2953);
   int x2999 = Long_val(x2952);
   int x3002 = Long_val(x2951);
   int x3005 = Long_val(x2950);
   c_eigen_tensor_d_spatial_conv_backward_input(x2966, x2967, x2968, 
                                                x2969, x2972, x2975, 
                                                x2978, x2981, x2984, 
                                                x2987, x2990, x2993, 
                                                x2996, x2999, x3002, 
                                                x3005);
   return Val_unit;
}
value owl_stub_297_c_eigen_tensor_d_spatial_conv_backward_input_byte16
     (value* argv, int argc)
{
   value x3009 = argv[15];
   value x3010 = argv[14];
   value x3011 = argv[13];
   value x3012 = argv[12];
   value x3013 = argv[11];
   value x3014 = argv[10];
   value x3015 = argv[9];
   value x3016 = argv[8];
   value x3017 = argv[7];
   value x3018 = argv[6];
   value x3019 = argv[5];
   value x3020 = argv[4];
   value x3021 = argv[3];
   value x3022 = argv[2];
   value x3023 = argv[1];
   value x3024 = argv[0];
   return
     owl_stub_297_c_eigen_tensor_d_spatial_conv_backward_input(x3024, 
                                                               x3023, 
                                                               x3022, 
                                                               x3021, 
                                                               x3020, 
                                                               x3019, 
                                                               x3018, 
                                                               x3017, 
                                                               x3016, 
                                                               x3015, 
                                                               x3014, 
                                                               x3013, 
                                                               x3012, 
                                                               x3011, 
                                                               x3010, 
                                                               x3009);
}
value owl_stub_298_c_eigen_tensor_d_spatial_conv_backward_kernel(value x3040,
                                                                 value x3039,
                                                                 value x3038,
                                                                 value x3037,
                                                                 value x3036,
                                                                 value x3035,
                                                                 value x3034,
                                                                 value x3033,
                                                                 value x3032,
                                                                 value x3031,
                                                                 value x3030,
                                                                 value x3029,
                                                                 value x3028,
                                                                 value x3027,
                                                                 value x3026,
                                                                 value x3025)
{
   double* x3041 = CTYPES_ADDR_OF_FATPTR(x3040);
   double* x3042 = CTYPES_ADDR_OF_FATPTR(x3039);
   double* x3043 = CTYPES_ADDR_OF_FATPTR(x3038);
   int x3044 = Long_val(x3037);
   int x3047 = Long_val(x3036);
   int x3050 = Long_val(x3035);
   int x3053 = Long_val(x3034);
   int x3056 = Long_val(x3033);
   int x3059 = Long_val(x3032);
   int x3062 = Long_val(x3031);
   int x3065 = Long_val(x3030);
   int x3068 = Long_val(x3029);
   int x3071 = Long_val(x3028);
   int x3074 = Long_val(x3027);
   int x3077 = Long_val(x3026);
   int x3080 = Long_val(x3025);
   c_eigen_tensor_d_spatial_conv_backward_kernel(x3041, x3042, x3043, 
                                                 x3044, x3047, x3050, 
                                                 x3053, x3056, x3059, 
                                                 x3062, x3065, x3068, 
                                                 x3071, x3074, x3077, 
                                                 x3080);
   return Val_unit;
}
value owl_stub_298_c_eigen_tensor_d_spatial_conv_backward_kernel_byte16
     (value* argv, int argc)
{
   value x3084 = argv[15];
   value x3085 = argv[14];
   value x3086 = argv[13];
   value x3087 = argv[12];
   value x3088 = argv[11];
   value x3089 = argv[10];
   value x3090 = argv[9];
   value x3091 = argv[8];
   value x3092 = argv[7];
   value x3093 = argv[6];
   value x3094 = argv[5];
   value x3095 = argv[4];
   value x3096 = argv[3];
   value x3097 = argv[2];
   value x3098 = argv[1];
   value x3099 = argv[0];
   return
     owl_stub_298_c_eigen_tensor_d_spatial_conv_backward_kernel(x3099, 
                                                                x3098, 
                                                                x3097, 
                                                                x3096, 
                                                                x3095, 
                                                                x3094, 
                                                                x3093, 
                                                                x3092, 
                                                                x3091, 
                                                                x3090, 
                                                                x3089, 
                                                                x3088, 
                                                                x3087, 
                                                                x3086, 
                                                                x3085, 
                                                                x3084);
}
value owl_stub_299_c_eigen_tensor_d_cuboid_conv(value x3118, value x3117,
                                                value x3116, value x3115,
                                                value x3114, value x3113,
                                                value x3112, value x3111,
                                                value x3110, value x3109,
                                                value x3108, value x3107,
                                                value x3106, value x3105,
                                                value x3104, value x3103,
                                                value x3102, value x3101,
                                                value x3100)
{
   double* x3119 = CTYPES_ADDR_OF_FATPTR(x3118);
   double* x3120 = CTYPES_ADDR_OF_FATPTR(x3117);
   double* x3121 = CTYPES_ADDR_OF_FATPTR(x3116);
   int x3122 = Long_val(x3115);
   int x3125 = Long_val(x3114);
   int x3128 = Long_val(x3113);
   int x3131 = Long_val(x3112);
   int x3134 = Long_val(x3111);
   int x3137 = Long_val(x3110);
   int x3140 = Long_val(x3109);
   int x3143 = Long_val(x3108);
   int x3146 = Long_val(x3107);
   int x3149 = Long_val(x3106);
   int x3152 = Long_val(x3105);
   int x3155 = Long_val(x3104);
   int x3158 = Long_val(x3103);
   int x3161 = Long_val(x3102);
   int x3164 = Long_val(x3101);
   int x3167 = Long_val(x3100);
   c_eigen_tensor_d_cuboid_conv(x3119, x3120, x3121, x3122, x3125, x3128,
                                x3131, x3134, x3137, x3140, x3143, x3146,
                                x3149, x3152, x3155, x3158, x3161, x3164,
                                x3167);
   return Val_unit;
}
value owl_stub_299_c_eigen_tensor_d_cuboid_conv_byte19(value* argv, int argc)
{
   value x3171 = argv[18];
   value x3172 = argv[17];
   value x3173 = argv[16];
   value x3174 = argv[15];
   value x3175 = argv[14];
   value x3176 = argv[13];
   value x3177 = argv[12];
   value x3178 = argv[11];
   value x3179 = argv[10];
   value x3180 = argv[9];
   value x3181 = argv[8];
   value x3182 = argv[7];
   value x3183 = argv[6];
   value x3184 = argv[5];
   value x3185 = argv[4];
   value x3186 = argv[3];
   value x3187 = argv[2];
   value x3188 = argv[1];
   value x3189 = argv[0];
   return
     owl_stub_299_c_eigen_tensor_d_cuboid_conv(x3189, x3188, x3187, x3186,
                                               x3185, x3184, x3183, x3182,
                                               x3181, x3180, x3179, x3178,
                                               x3177, x3176, x3175, x3174,
                                               x3173, x3172, x3171);
}
value owl_stub_300_c_eigen_tensor_d_cuboid_conv_backward_input(value x3207,
                                                               value x3206,
                                                               value x3205,
                                                               value x3204,
                                                               value x3203,
                                                               value x3202,
                                                               value x3201,
                                                               value x3200,
                                                               value x3199,
                                                               value x3198,
                                                               value x3197,
                                                               value x3196,
                                                               value x3195,
                                                               value x3194,
                                                               value x3193,
                                                               value x3192,
                                                               value x3191,
                                                               value x3190)
{
   double* x3208 = CTYPES_ADDR_OF_FATPTR(x3207);
   double* x3209 = CTYPES_ADDR_OF_FATPTR(x3206);
   double* x3210 = CTYPES_ADDR_OF_FATPTR(x3205);
   int x3211 = Long_val(x3204);
   int x3214 = Long_val(x3203);
   int x3217 = Long_val(x3202);
   int x3220 = Long_val(x3201);
   int x3223 = Long_val(x3200);
   int x3226 = Long_val(x3199);
   int x3229 = Long_val(x3198);
   int x3232 = Long_val(x3197);
   int x3235 = Long_val(x3196);
   int x3238 = Long_val(x3195);
   int x3241 = Long_val(x3194);
   int x3244 = Long_val(x3193);
   int x3247 = Long_val(x3192);
   int x3250 = Long_val(x3191);
   int x3253 = Long_val(x3190);
   c_eigen_tensor_d_cuboid_conv_backward_input(x3208, x3209, x3210, x3211,
                                               x3214, x3217, x3220, x3223,
                                               x3226, x3229, x3232, x3235,
                                               x3238, x3241, x3244, x3247,
                                               x3250, x3253);
   return Val_unit;
}
value owl_stub_300_c_eigen_tensor_d_cuboid_conv_backward_input_byte18
     (value* argv, int argc)
{
   value x3257 = argv[17];
   value x3258 = argv[16];
   value x3259 = argv[15];
   value x3260 = argv[14];
   value x3261 = argv[13];
   value x3262 = argv[12];
   value x3263 = argv[11];
   value x3264 = argv[10];
   value x3265 = argv[9];
   value x3266 = argv[8];
   value x3267 = argv[7];
   value x3268 = argv[6];
   value x3269 = argv[5];
   value x3270 = argv[4];
   value x3271 = argv[3];
   value x3272 = argv[2];
   value x3273 = argv[1];
   value x3274 = argv[0];
   return
     owl_stub_300_c_eigen_tensor_d_cuboid_conv_backward_input(x3274, 
                                                              x3273, 
                                                              x3272, 
                                                              x3271, 
                                                              x3270, 
                                                              x3269, 
                                                              x3268, 
                                                              x3267, 
                                                              x3266, 
                                                              x3265, 
                                                              x3264, 
                                                              x3263, 
                                                              x3262, 
                                                              x3261, 
                                                              x3260, 
                                                              x3259, 
                                                              x3258, 
                                                              x3257);
}
value owl_stub_301_c_eigen_tensor_d_cuboid_conv_backward_kernel(value x3292,
                                                                value x3291,
                                                                value x3290,
                                                                value x3289,
                                                                value x3288,
                                                                value x3287,
                                                                value x3286,
                                                                value x3285,
                                                                value x3284,
                                                                value x3283,
                                                                value x3282,
                                                                value x3281,
                                                                value x3280,
                                                                value x3279,
                                                                value x3278,
                                                                value x3277,
                                                                value x3276,
                                                                value x3275)
{
   double* x3293 = CTYPES_ADDR_OF_FATPTR(x3292);
   double* x3294 = CTYPES_ADDR_OF_FATPTR(x3291);
   double* x3295 = CTYPES_ADDR_OF_FATPTR(x3290);
   int x3296 = Long_val(x3289);
   int x3299 = Long_val(x3288);
   int x3302 = Long_val(x3287);
   int x3305 = Long_val(x3286);
   int x3308 = Long_val(x3285);
   int x3311 = Long_val(x3284);
   int x3314 = Long_val(x3283);
   int x3317 = Long_val(x3282);
   int x3320 = Long_val(x3281);
   int x3323 = Long_val(x3280);
   int x3326 = Long_val(x3279);
   int x3329 = Long_val(x3278);
   int x3332 = Long_val(x3277);
   int x3335 = Long_val(x3276);
   int x3338 = Long_val(x3275);
   c_eigen_tensor_d_cuboid_conv_backward_kernel(x3293, x3294, x3295, 
                                                x3296, x3299, x3302, 
                                                x3305, x3308, x3311, 
                                                x3314, x3317, x3320, 
                                                x3323, x3326, x3329, 
                                                x3332, x3335, x3338);
   return Val_unit;
}
value owl_stub_301_c_eigen_tensor_d_cuboid_conv_backward_kernel_byte18
     (value* argv, int argc)
{
   value x3342 = argv[17];
   value x3343 = argv[16];
   value x3344 = argv[15];
   value x3345 = argv[14];
   value x3346 = argv[13];
   value x3347 = argv[12];
   value x3348 = argv[11];
   value x3349 = argv[10];
   value x3350 = argv[9];
   value x3351 = argv[8];
   value x3352 = argv[7];
   value x3353 = argv[6];
   value x3354 = argv[5];
   value x3355 = argv[4];
   value x3356 = argv[3];
   value x3357 = argv[2];
   value x3358 = argv[1];
   value x3359 = argv[0];
   return
     owl_stub_301_c_eigen_tensor_d_cuboid_conv_backward_kernel(x3359, 
                                                               x3358, 
                                                               x3357, 
                                                               x3356, 
                                                               x3355, 
                                                               x3354, 
                                                               x3353, 
                                                               x3352, 
                                                               x3351, 
                                                               x3350, 
                                                               x3349, 
                                                               x3348, 
                                                               x3347, 
                                                               x3346, 
                                                               x3345, 
                                                               x3344, 
                                                               x3343, 
                                                               x3342);
}
value owl_stub_302_c_eigen_tensor_d_spatial_max_pooling(value x3374,
                                                        value x3373,
                                                        value x3372,
                                                        value x3371,
                                                        value x3370,
                                                        value x3369,
                                                        value x3368,
                                                        value x3367,
                                                        value x3366,
                                                        value x3365,
                                                        value x3364,
                                                        value x3363,
                                                        value x3362,
                                                        value x3361,
                                                        value x3360)
{
   double* x3375 = CTYPES_ADDR_OF_FATPTR(x3374);
   double* x3376 = CTYPES_ADDR_OF_FATPTR(x3373);
   int x3377 = Long_val(x3372);
   int x3380 = Long_val(x3371);
   int x3383 = Long_val(x3370);
   int x3386 = Long_val(x3369);
   int x3389 = Long_val(x3368);
   int x3392 = Long_val(x3367);
   int x3395 = Long_val(x3366);
   int x3398 = Long_val(x3365);
   int x3401 = Long_val(x3364);
   int x3404 = Long_val(x3363);
   int x3407 = Long_val(x3362);
   int x3410 = Long_val(x3361);
   int x3413 = Long_val(x3360);
   c_eigen_tensor_d_spatial_max_pooling(x3375, x3376, x3377, x3380, x3383,
                                        x3386, x3389, x3392, x3395, x3398,
                                        x3401, x3404, x3407, x3410, x3413);
   return Val_unit;
}
value owl_stub_302_c_eigen_tensor_d_spatial_max_pooling_byte15(value* argv,
                                                               int argc)
{
   value x3417 = argv[14];
   value x3418 = argv[13];
   value x3419 = argv[12];
   value x3420 = argv[11];
   value x3421 = argv[10];
   value x3422 = argv[9];
   value x3423 = argv[8];
   value x3424 = argv[7];
   value x3425 = argv[6];
   value x3426 = argv[5];
   value x3427 = argv[4];
   value x3428 = argv[3];
   value x3429 = argv[2];
   value x3430 = argv[1];
   value x3431 = argv[0];
   return
     owl_stub_302_c_eigen_tensor_d_spatial_max_pooling(x3431, x3430, 
                                                       x3429, x3428, 
                                                       x3427, x3426, 
                                                       x3425, x3424, 
                                                       x3423, x3422, 
                                                       x3421, x3420, 
                                                       x3419, x3418, 
                                                       x3417);
}
value owl_stub_303_c_eigen_tensor_d_spatial_avg_pooling(value x3446,
                                                        value x3445,
                                                        value x3444,
                                                        value x3443,
                                                        value x3442,
                                                        value x3441,
                                                        value x3440,
                                                        value x3439,
                                                        value x3438,
                                                        value x3437,
                                                        value x3436,
                                                        value x3435,
                                                        value x3434,
                                                        value x3433,
                                                        value x3432)
{
   double* x3447 = CTYPES_ADDR_OF_FATPTR(x3446);
   double* x3448 = CTYPES_ADDR_OF_FATPTR(x3445);
   int x3449 = Long_val(x3444);
   int x3452 = Long_val(x3443);
   int x3455 = Long_val(x3442);
   int x3458 = Long_val(x3441);
   int x3461 = Long_val(x3440);
   int x3464 = Long_val(x3439);
   int x3467 = Long_val(x3438);
   int x3470 = Long_val(x3437);
   int x3473 = Long_val(x3436);
   int x3476 = Long_val(x3435);
   int x3479 = Long_val(x3434);
   int x3482 = Long_val(x3433);
   int x3485 = Long_val(x3432);
   c_eigen_tensor_d_spatial_avg_pooling(x3447, x3448, x3449, x3452, x3455,
                                        x3458, x3461, x3464, x3467, x3470,
                                        x3473, x3476, x3479, x3482, x3485);
   return Val_unit;
}
value owl_stub_303_c_eigen_tensor_d_spatial_avg_pooling_byte15(value* argv,
                                                               int argc)
{
   value x3489 = argv[14];
   value x3490 = argv[13];
   value x3491 = argv[12];
   value x3492 = argv[11];
   value x3493 = argv[10];
   value x3494 = argv[9];
   value x3495 = argv[8];
   value x3496 = argv[7];
   value x3497 = argv[6];
   value x3498 = argv[5];
   value x3499 = argv[4];
   value x3500 = argv[3];
   value x3501 = argv[2];
   value x3502 = argv[1];
   value x3503 = argv[0];
   return
     owl_stub_303_c_eigen_tensor_d_spatial_avg_pooling(x3503, x3502, 
                                                       x3501, x3500, 
                                                       x3499, x3498, 
                                                       x3497, x3496, 
                                                       x3495, x3494, 
                                                       x3493, x3492, 
                                                       x3491, x3490, 
                                                       x3489);
}
value owl_stub_304_c_eigen_tensor_d_cuboid_max_pooling(value x3520,
                                                       value x3519,
                                                       value x3518,
                                                       value x3517,
                                                       value x3516,
                                                       value x3515,
                                                       value x3514,
                                                       value x3513,
                                                       value x3512,
                                                       value x3511,
                                                       value x3510,
                                                       value x3509,
                                                       value x3508,
                                                       value x3507,
                                                       value x3506,
                                                       value x3505,
                                                       value x3504)
{
   double* x3521 = CTYPES_ADDR_OF_FATPTR(x3520);
   double* x3522 = CTYPES_ADDR_OF_FATPTR(x3519);
   int x3523 = Long_val(x3518);
   int x3526 = Long_val(x3517);
   int x3529 = Long_val(x3516);
   int x3532 = Long_val(x3515);
   int x3535 = Long_val(x3514);
   int x3538 = Long_val(x3513);
   int x3541 = Long_val(x3512);
   int x3544 = Long_val(x3511);
   int x3547 = Long_val(x3510);
   int x3550 = Long_val(x3509);
   int x3553 = Long_val(x3508);
   int x3556 = Long_val(x3507);
   int x3559 = Long_val(x3506);
   int x3562 = Long_val(x3505);
   int x3565 = Long_val(x3504);
   c_eigen_tensor_d_cuboid_max_pooling(x3521, x3522, x3523, x3526, x3529,
                                       x3532, x3535, x3538, x3541, x3544,
                                       x3547, x3550, x3553, x3556, x3559,
                                       x3562, x3565);
   return Val_unit;
}
value owl_stub_304_c_eigen_tensor_d_cuboid_max_pooling_byte17(value* argv,
                                                              int argc)
{
   value x3569 = argv[16];
   value x3570 = argv[15];
   value x3571 = argv[14];
   value x3572 = argv[13];
   value x3573 = argv[12];
   value x3574 = argv[11];
   value x3575 = argv[10];
   value x3576 = argv[9];
   value x3577 = argv[8];
   value x3578 = argv[7];
   value x3579 = argv[6];
   value x3580 = argv[5];
   value x3581 = argv[4];
   value x3582 = argv[3];
   value x3583 = argv[2];
   value x3584 = argv[1];
   value x3585 = argv[0];
   return
     owl_stub_304_c_eigen_tensor_d_cuboid_max_pooling(x3585, x3584, x3583,
                                                      x3582, x3581, x3580,
                                                      x3579, x3578, x3577,
                                                      x3576, x3575, x3574,
                                                      x3573, x3572, x3571,
                                                      x3570, x3569);
}
value owl_stub_305_c_eigen_tensor_d_cuboid_avg_pooling(value x3602,
                                                       value x3601,
                                                       value x3600,
                                                       value x3599,
                                                       value x3598,
                                                       value x3597,
                                                       value x3596,
                                                       value x3595,
                                                       value x3594,
                                                       value x3593,
                                                       value x3592,
                                                       value x3591,
                                                       value x3590,
                                                       value x3589,
                                                       value x3588,
                                                       value x3587,
                                                       value x3586)
{
   double* x3603 = CTYPES_ADDR_OF_FATPTR(x3602);
   double* x3604 = CTYPES_ADDR_OF_FATPTR(x3601);
   int x3605 = Long_val(x3600);
   int x3608 = Long_val(x3599);
   int x3611 = Long_val(x3598);
   int x3614 = Long_val(x3597);
   int x3617 = Long_val(x3596);
   int x3620 = Long_val(x3595);
   int x3623 = Long_val(x3594);
   int x3626 = Long_val(x3593);
   int x3629 = Long_val(x3592);
   int x3632 = Long_val(x3591);
   int x3635 = Long_val(x3590);
   int x3638 = Long_val(x3589);
   int x3641 = Long_val(x3588);
   int x3644 = Long_val(x3587);
   int x3647 = Long_val(x3586);
   c_eigen_tensor_d_cuboid_avg_pooling(x3603, x3604, x3605, x3608, x3611,
                                       x3614, x3617, x3620, x3623, x3626,
                                       x3629, x3632, x3635, x3638, x3641,
                                       x3644, x3647);
   return Val_unit;
}
value owl_stub_305_c_eigen_tensor_d_cuboid_avg_pooling_byte17(value* argv,
                                                              int argc)
{
   value x3651 = argv[16];
   value x3652 = argv[15];
   value x3653 = argv[14];
   value x3654 = argv[13];
   value x3655 = argv[12];
   value x3656 = argv[11];
   value x3657 = argv[10];
   value x3658 = argv[9];
   value x3659 = argv[8];
   value x3660 = argv[7];
   value x3661 = argv[6];
   value x3662 = argv[5];
   value x3663 = argv[4];
   value x3664 = argv[3];
   value x3665 = argv[2];
   value x3666 = argv[1];
   value x3667 = argv[0];
   return
     owl_stub_305_c_eigen_tensor_d_cuboid_avg_pooling(x3667, x3666, x3665,
                                                      x3664, x3663, x3662,
                                                      x3661, x3660, x3659,
                                                      x3658, x3657, x3656,
                                                      x3655, x3654, x3653,
                                                      x3652, x3651);
}
value owl_stub_306_c_eigen_tensor_d_spatial_max_pooling_argmax(value x3682,
                                                               value x3681,
                                                               value x3680,
                                                               value x3679,
                                                               value x3678,
                                                               value x3677,
                                                               value x3676,
                                                               value x3675,
                                                               value x3674,
                                                               value x3673,
                                                               value x3672,
                                                               value x3671,
                                                               value x3670,
                                                               value x3669,
                                                               value x3668)
{
   double* x3683 = CTYPES_ADDR_OF_FATPTR(x3682);
   double* x3684 = CTYPES_ADDR_OF_FATPTR(x3681);
   int64_t* x3685 = CTYPES_ADDR_OF_FATPTR(x3680);
   int x3686 = Long_val(x3679);
   int x3689 = Long_val(x3678);
   int x3692 = Long_val(x3677);
   int x3695 = Long_val(x3676);
   int x3698 = Long_val(x3675);
   int x3701 = Long_val(x3674);
   int x3704 = Long_val(x3673);
   int x3707 = Long_val(x3672);
   int x3710 = Long_val(x3671);
   int x3713 = Long_val(x3670);
   int x3716 = Long_val(x3669);
   int x3719 = Long_val(x3668);
   c_eigen_tensor_d_spatial_max_pooling_argmax(x3683, x3684, x3685, x3686,
                                               x3689, x3692, x3695, x3698,
                                               x3701, x3704, x3707, x3710,
                                               x3713, x3716, x3719);
   return Val_unit;
}
value owl_stub_306_c_eigen_tensor_d_spatial_max_pooling_argmax_byte15
     (value* argv, int argc)
{
   value x3723 = argv[14];
   value x3724 = argv[13];
   value x3725 = argv[12];
   value x3726 = argv[11];
   value x3727 = argv[10];
   value x3728 = argv[9];
   value x3729 = argv[8];
   value x3730 = argv[7];
   value x3731 = argv[6];
   value x3732 = argv[5];
   value x3733 = argv[4];
   value x3734 = argv[3];
   value x3735 = argv[2];
   value x3736 = argv[1];
   value x3737 = argv[0];
   return
     owl_stub_306_c_eigen_tensor_d_spatial_max_pooling_argmax(x3737, 
                                                              x3736, 
                                                              x3735, 
                                                              x3734, 
                                                              x3733, 
                                                              x3732, 
                                                              x3731, 
                                                              x3730, 
                                                              x3729, 
                                                              x3728, 
                                                              x3727, 
                                                              x3726, 
                                                              x3725, 
                                                              x3724, 
                                                              x3723);
}
value owl_stub_307_c_eigen_tensor_d_spatial_max_pooling_backward(value x3752,
                                                                 value x3751,
                                                                 value x3750,
                                                                 value x3749,
                                                                 value x3748,
                                                                 value x3747,
                                                                 value x3746,
                                                                 value x3745,
                                                                 value x3744,
                                                                 value x3743,
                                                                 value x3742,
                                                                 value x3741,
                                                                 value x3740,
                                                                 value x3739,
                                                                 value x3738)
{
   double* x3753 = CTYPES_ADDR_OF_FATPTR(x3752);
   double* x3754 = CTYPES_ADDR_OF_FATPTR(x3751);
   double* x3755 = CTYPES_ADDR_OF_FATPTR(x3750);
   int x3756 = Long_val(x3749);
   int x3759 = Long_val(x3748);
   int x3762 = Long_val(x3747);
   int x3765 = Long_val(x3746);
   int x3768 = Long_val(x3745);
   int x3771 = Long_val(x3744);
   int x3774 = Long_val(x3743);
   int x3777 = Long_val(x3742);
   int x3780 = Long_val(x3741);
   int x3783 = Long_val(x3740);
   int x3786 = Long_val(x3739);
   int x3789 = Long_val(x3738);
   c_eigen_tensor_d_spatial_max_pooling_backward(x3753, x3754, x3755, 
                                                 x3756, x3759, x3762, 
                                                 x3765, x3768, x3771, 
                                                 x3774, x3777, x3780, 
                                                 x3783, x3786, x3789);
   return Val_unit;
}
value owl_stub_307_c_eigen_tensor_d_spatial_max_pooling_backward_byte15
     (value* argv, int argc)
{
   value x3793 = argv[14];
   value x3794 = argv[13];
   value x3795 = argv[12];
   value x3796 = argv[11];
   value x3797 = argv[10];
   value x3798 = argv[9];
   value x3799 = argv[8];
   value x3800 = argv[7];
   value x3801 = argv[6];
   value x3802 = argv[5];
   value x3803 = argv[4];
   value x3804 = argv[3];
   value x3805 = argv[2];
   value x3806 = argv[1];
   value x3807 = argv[0];
   return
     owl_stub_307_c_eigen_tensor_d_spatial_max_pooling_backward(x3807, 
                                                                x3806, 
                                                                x3805, 
                                                                x3804, 
                                                                x3803, 
                                                                x3802, 
                                                                x3801, 
                                                                x3800, 
                                                                x3799, 
                                                                x3798, 
                                                                x3797, 
                                                                x3796, 
                                                                x3795, 
                                                                x3794, 
                                                                x3793);
}
value owl_stub_308_c_eigen_tensor_d_spatial_avg_pooling_backward(value x3821,
                                                                 value x3820,
                                                                 value x3819,
                                                                 value x3818,
                                                                 value x3817,
                                                                 value x3816,
                                                                 value x3815,
                                                                 value x3814,
                                                                 value x3813,
                                                                 value x3812,
                                                                 value x3811,
                                                                 value x3810,
                                                                 value x3809,
                                                                 value x3808)
{
   double* x3822 = CTYPES_ADDR_OF_FATPTR(x3821);
   double* x3823 = CTYPES_ADDR_OF_FATPTR(x3820);
   int x3824 = Long_val(x3819);
   int x3827 = Long_val(x3818);
   int x3830 = Long_val(x3817);
   int x3833 = Long_val(x3816);
   int x3836 = Long_val(x3815);
   int x3839 = Long_val(x3814);
   int x3842 = Long_val(x3813);
   int x3845 = Long_val(x3812);
   int x3848 = Long_val(x3811);
   int x3851 = Long_val(x3810);
   int x3854 = Long_val(x3809);
   int x3857 = Long_val(x3808);
   c_eigen_tensor_d_spatial_avg_pooling_backward(x3822, x3823, x3824, 
                                                 x3827, x3830, x3833, 
                                                 x3836, x3839, x3842, 
                                                 x3845, x3848, x3851, 
                                                 x3854, x3857);
   return Val_unit;
}
value owl_stub_308_c_eigen_tensor_d_spatial_avg_pooling_backward_byte14
     (value* argv, int argc)
{
   value x3861 = argv[13];
   value x3862 = argv[12];
   value x3863 = argv[11];
   value x3864 = argv[10];
   value x3865 = argv[9];
   value x3866 = argv[8];
   value x3867 = argv[7];
   value x3868 = argv[6];
   value x3869 = argv[5];
   value x3870 = argv[4];
   value x3871 = argv[3];
   value x3872 = argv[2];
   value x3873 = argv[1];
   value x3874 = argv[0];
   return
     owl_stub_308_c_eigen_tensor_d_spatial_avg_pooling_backward(x3874, 
                                                                x3873, 
                                                                x3872, 
                                                                x3871, 
                                                                x3870, 
                                                                x3869, 
                                                                x3868, 
                                                                x3867, 
                                                                x3866, 
                                                                x3865, 
                                                                x3864, 
                                                                x3863, 
                                                                x3862, 
                                                                x3861);
}
