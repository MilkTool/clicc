#include "inline.h"

extern CL_INIT KClisp[];
extern CL_INIT Slisp[];
void yes_or_no_p1(CL_FORM *base);
void y_or_n_p1(CL_FORM *base);
void gentemp1(CL_FORM *base);
void gensym1(CL_FORM *base);
void copy_symbol1(CL_FORM *base);
void getf1(CL_FORM *base);
void set_get1(CL_FORM *base);
void get1(CL_FORM *base);
void nstring_capitalize1(CL_FORM *base);
void nstring_downcase1(CL_FORM *base);
void nstring_upcase1(CL_FORM *base);
void string_capitalize1(CL_FORM *base);
void string_downcase1(CL_FORM *base);
void string_upcase1(CL_FORM *base);
void make_string1(CL_FORM *base);
void string_not_equal1(CL_FORM *base);
void string_not_lessp1(CL_FORM *base);
void string_not_greaterp1(CL_FORM *base);
void string_greaterp1(CL_FORM *base);
void string_lessp1(CL_FORM *base);
void stringNE1(CL_FORM *base);
void stringGE1(CL_FORM *base);
void stringLE1(CL_FORM *base);
void stringG1(CL_FORM *base);
void stringL1(CL_FORM *base);
void string_equal1(CL_FORM *base);
void stringE1(CL_FORM *base);
void rassoc_if_not1(CL_FORM *base);
void rassoc_if1(CL_FORM *base);
void rassoc1(CL_FORM *base);
void assoc_if_not1(CL_FORM *base);
void assoc_if1(CL_FORM *base);
void assoc1(CL_FORM *base);
void pairlis1(CL_FORM *base);
void subsetp1(CL_FORM *base);
void set_difference1(CL_FORM *base);
void intersection1(CL_FORM *base);
void nunion1(CL_FORM *base);
void union1(CL_FORM *base);
void adjoin1(CL_FORM *base);
void member_if_not1(CL_FORM *base);
void member_if1(CL_FORM *base);
void member1(CL_FORM *base);
void nsublis1(CL_FORM *base);
void sublis1(CL_FORM *base);
void nsubst_if_not1(CL_FORM *base);
void nsubst_if1(CL_FORM *base);
void nsubst1(CL_FORM *base);
void subst_if_not1(CL_FORM *base);
void subst_if1(CL_FORM *base);
void subst1(CL_FORM *base);
void nbutlast1(CL_FORM *base);
void butlast1(CL_FORM *base);
void make_list1(CL_FORM *base);
void last1(CL_FORM *base);
void tree_equal1(CL_FORM *base);
void sort1(CL_FORM *base);
void substitute1(CL_FORM *base);
void search1(CL_FORM *base);
void mismatch1(CL_FORM *base);
void count1(CL_FORM *base);
void list_position1(CL_FORM *base);
void vector_position1(CL_FORM *base);
void list_find1(CL_FORM *base);
void vector_find1(CL_FORM *base);
void remove_duplicates1(CL_FORM *base);
void vector_remove1(CL_FORM *base);
void list_remove1(CL_FORM *base);
void replace1(CL_FORM *base);
void fill1(CL_FORM *base);
void reduce1(CL_FORM *base);
void make_sequence1(CL_FORM *base);
void subseq1(CL_FORM *base);
void break1(CL_FORM *base);
void format21(CL_FORM *base);
void fresh_line1(CL_FORM *base);
void terpri1(CL_FORM *base);
void write_string1(CL_FORM *base);
void write_to_string1(CL_FORM *base);
void princ1(CL_FORM *base);
void pprint1(CL_FORM *base);
void print1(CL_FORM *base);
void prin11(CL_FORM *base);
void write1(CL_FORM *base);
void parse_integer1(CL_FORM *base);
void read_from_string1(CL_FORM *base);
void peek_char1(CL_FORM *base);
void read_line1(CL_FORM *base);
void read_delimited_list1(CL_FORM *base);
void read_preserving_whitespace1(CL_FORM *base);
void read1(CL_FORM *base);
void get_dispatch_macro_character1(CL_FORM *base);
void set_dispatch_macro_character1(CL_FORM *base);
void make_dispatch_macro_character1(CL_FORM *base);
void get_macro_character1(CL_FORM *base);
void set_macro_character1(CL_FORM *base);
void set_syntax_from_char1(CL_FORM *base);
void copy_readtable1(CL_FORM *base);
void set_gethash1(CL_FORM *base);
void gethash1(CL_FORM *base);
void make_hash_table1(CL_FORM *base);
void unuse_package1(CL_FORM *base);
void use_package1(CL_FORM *base);
void shadow1(CL_FORM *base);
void shadowing_import1(CL_FORM *base);
void import1(CL_FORM *base);
void unexport1(CL_FORM *base);
void export1(CL_FORM *base);
void unintern1(CL_FORM *base);
void find_symbol1(CL_FORM *base);
void intern1(CL_FORM *base);
void rename_package1(CL_FORM *base);
void in_package1(CL_FORM *base);
void make_package1(CL_FORM *base);
void float_sign1(CL_FORM *base);
void round1(CL_FORM *base);
void truncate1(CL_FORM *base);
void ceiling1(CL_FORM *base);
void floor1(CL_FORM *base);
void float1(CL_FORM *base);
void log1(CL_FORM *base);
void unix_file_kind1(CL_FORM *base);
void directory1(CL_FORM *base);
void unix_namestring1(CL_FORM *base);
void wild_pathname_p1(CL_FORM *base);
void enough_namestring1(CL_FORM *base);
void pathname_type1(CL_FORM *base);
void pathname_name1(CL_FORM *base);
void pathname_directory1(CL_FORM *base);
void pathname_device1(CL_FORM *base);
void pathname_host1(CL_FORM *base);
void make_pathname1(CL_FORM *base);
void merge_pathnames1(CL_FORM *base);
void parse_namestring1(CL_FORM *base);
void write_char1(CL_FORM *base);
void unread_char1(CL_FORM *base);
void read_char1(CL_FORM *base);
void file_position1(CL_FORM *base);
void open1(CL_FORM *base);
void digit_char1(CL_FORM *base);
void digit_char_p1(CL_FORM *base);
void adjust_array1(CL_FORM *base);
void vector_push_extend1(CL_FORM *base);
void bit_not1(CL_FORM *base);
void bit_orc21(CL_FORM *base);
void bit_orc11(CL_FORM *base);
void bit_andc21(CL_FORM *base);
void bit_andc11(CL_FORM *base);
void bit_nor1(CL_FORM *base);
void bit_nand1(CL_FORM *base);
void bit_eqv1(CL_FORM *base);
void bit_xor1(CL_FORM *base);
void bit_ior1(CL_FORM *base);
void bit_and1(CL_FORM *base);
void make_array1(CL_FORM *base);
void close2(CL_FORM *base);
void file_name1(CL_FORM *base);
void make_string_output_stream1(CL_FORM *base);
void make_string_input_stream1(CL_FORM *base);
void make_stream1(CL_FORM *base);
void rt_make_stream(CL_FORM *base, int nargs);
extern GLOBAL_FUNARG Crt_make_stream;
void Fstreamp(CL_FORM *base);
void stream_type(CL_FORM *base);
void stream_extra(CL_FORM *base);
void stream_readc(CL_FORM *base);
void stream_unreadc(CL_FORM *base);
void stream_writec(CL_FORM *base);
void stream_column(CL_FORM *base);
void stream_tell(CL_FORM *base);
void stream_seek(CL_FORM *base);
void stream_length(CL_FORM *base);
void print_stream(CL_FORM *base);
extern GLOBAL_FUNARG Cprint_stream;
void undef_stream_op(CL_FORM *base, int nargs);
extern GLOBAL_FUNARG Cundef_stream_op;
void nil_fun(CL_FORM *base);
extern GLOBAL_FUNARG Cnil_fun;
void close_err(CL_FORM *base, int nargs);
extern GLOBAL_FUNARG Cclose_err;
void close1(CL_FORM *base);
extern GLOBAL_FUNARG Cclose1;
void Fmake_synonym_stream(CL_FORM *base);
void Fmake_broadcast_stream(CL_FORM *base, int nargs);
void Fmake_concatenated_stream(CL_FORM *base, int nargs);
void Fmake_two_way_stream(CL_FORM *base);
void Fmake_echo_stream(CL_FORM *base);
void Fmake_string_input_stream(CL_FORM *base, int nargs);
void Fmake_string_output_stream(CL_FORM *base, int nargs);
void Fget_output_stream_string(CL_FORM *base);
void Finput_stream_p(CL_FORM *base);
void Foutput_stream_p(CL_FORM *base);
void Fstream_element_type(CL_FORM *base);
void rt_file_name(CL_FORM *base, int nargs);
void make_file_input_stream(CL_FORM *base);
void make_file_output_stream(CL_FORM *base);
void make_file_io_stream(CL_FORM *base);
void make_terminal_io(CL_FORM *base);
void Fclose(CL_FORM *base, int nargs);
void make_complex_base_array(CL_FORM *base, int nargs);
extern GLOBAL_FUNARG Cmake_complex_base_array;
void complex_base_array_p(CL_FORM *base);
void complex_base_array_data(CL_FORM *base);
void complex_base_array_displaced(CL_FORM *base);
void make_complex_array(CL_FORM *base, int nargs);
extern GLOBAL_FUNARG Cmake_complex_array;
void complex_array_data(CL_FORM *base);
void complex_array_displaced(CL_FORM *base);
void complex_array_dims(CL_FORM *base);
void make_complex_vector(CL_FORM *base, int nargs);
extern GLOBAL_FUNARG Cmake_complex_vector;
void complex_vector_p(CL_FORM *base);
void complex_vector_data(CL_FORM *base);
void complex_vector_displaced(CL_FORM *base);
void complex_vector_length(CL_FORM *base);
void complex_vector_fillptr(CL_FORM *base);
void set_complex_vector_fillptr(CL_FORM *base);
void Farrayp(CL_FORM *base);
void Fsimple_array_p(CL_FORM *base);
void Fstringp(CL_FORM *base);
void Fvectorp(CL_FORM *base);
void Fbit_array_p(CL_FORM *base);
void Fbit_vector_p(CL_FORM *base);
void Fmake_array(CL_FORM *base, int nargs);
extern GLOBAL_FUNARG CFmake_array;
void make_plain_vector(CL_FORM *base);
void type_code_p(CL_FORM *base);
void Fvector(CL_FORM *base, int nargs);
extern GLOBAL_FUNARG CFvector;
void rt_vref(CL_FORM *base);
void rt_set_vref(CL_FORM *base);
void Faref(CL_FORM *base, int nargs);
void Fset_aref(CL_FORM *base, int nargs);
void Fsvref(CL_FORM *base);
void pvref(CL_FORM *base);
void Fset_svref(CL_FORM *base);
void set_pvref(CL_FORM *base);
void Farray_element_type(CL_FORM *base);
void array_element_type_internal(CL_FORM *base);
void to_element_type(CL_FORM *base);
void Fupgraded_array_element_type(CL_FORM *base);
void Farray_rank(CL_FORM *base);
void Farray_dimension(CL_FORM *base);
void Farray_dimensions(CL_FORM *base);
void Farray_total_size(CL_FORM *base);
void Farray_in_bounds_p(CL_FORM *base, int nargs);
void Farray_row_major_index(CL_FORM *base, int nargs);
extern GLOBAL_FUNARG CFarray_row_major_index;
void Frow_major_aref(CL_FORM *base);
void Fset_row_major_aref(CL_FORM *base);
void Fadjustable_array_p(CL_FORM *base);
void Fbit(CL_FORM *base, int nargs);
void Fset_bit(CL_FORM *base, int nargs);
void Fsbit(CL_FORM *base, int nargs);
void Fset_sbit(CL_FORM *base, int nargs);
void Fbit_and(CL_FORM *base, int nargs);
void Fbit_ior(CL_FORM *base, int nargs);
void Fbit_xor(CL_FORM *base, int nargs);
void Fbit_eqv(CL_FORM *base, int nargs);
void Fbit_nand(CL_FORM *base, int nargs);
void Fbit_nor(CL_FORM *base, int nargs);
void Fbit_andc1(CL_FORM *base, int nargs);
void Fbit_andc2(CL_FORM *base, int nargs);
void Fbit_orc1(CL_FORM *base, int nargs);
void Fbit_orc2(CL_FORM *base, int nargs);
void bit_op(CL_FORM *base);
void Fbit_not(CL_FORM *base, int nargs);
void Farray_has_fill_pointer_p(CL_FORM *base);
void Ffill_pointer(CL_FORM *base);
void Fset_fill_pointer(CL_FORM *base);
void Fvector_push(CL_FORM *base);
void Fvector_push_extend(CL_FORM *base, int nargs);
void Fvector_pop(CL_FORM *base);
void Fadjust_array(CL_FORM *base, int nargs);
void shrink_simple_string(CL_FORM *base);
void string_to_simple_string(CL_FORM *base);
void Fstandard_char_p(CL_FORM *base);
void Fgraphic_char_p(CL_FORM *base);
void Falpha_char_p(CL_FORM *base);
void Fupper_case_p(CL_FORM *base);
extern GLOBAL_FUNARG CFupper_case_p;
void Flower_case_p(CL_FORM *base);
extern GLOBAL_FUNARG CFlower_case_p;
void Fboth_case_p(CL_FORM *base);
void Fdigit_char_p(CL_FORM *base, int nargs);
void Falphanumericp(CL_FORM *base);
void rt_charE(CL_FORM *base);
void rt_charNE(CL_FORM *base);
void rt_charL(CL_FORM *base);
void rt_charG(CL_FORM *base);
void rt_charLE(CL_FORM *base);
void rt_charGE(CL_FORM *base);
void FcharE(CL_FORM *base, int nargs);
extern GLOBAL_FUNARG CFcharE;
void FcharNE(CL_FORM *base, int nargs);
void FcharL(CL_FORM *base, int nargs);
void FcharG(CL_FORM *base, int nargs);
void FcharLE(CL_FORM *base, int nargs);
void FcharGE(CL_FORM *base, int nargs);
void rt_char_equal(CL_FORM *base);
void rt_char_not_equal(CL_FORM *base);
void rt_char_lessp(CL_FORM *base);
void rt_char_greaterp(CL_FORM *base);
void rt_char_not_greaterp(CL_FORM *base);
void rt_char_not_lessp(CL_FORM *base);
void Fchar_equal(CL_FORM *base, int nargs);
void Fchar_not_equal(CL_FORM *base, int nargs);
void Fchar_lessp(CL_FORM *base, int nargs);
void Fchar_greaterp(CL_FORM *base, int nargs);
void Fchar_not_greaterp(CL_FORM *base, int nargs);
void Fchar_not_lessp(CL_FORM *base, int nargs);
void Fchar_code(CL_FORM *base);
void Fcode_char(CL_FORM *base);
void Fcharacter(CL_FORM *base);
void Fchar_upcase(CL_FORM *base);
void Fchar_downcase(CL_FORM *base);
void Fdigit_char(CL_FORM *base, int nargs);
void Fchar_int(CL_FORM *base);
void Fchar_name(CL_FORM *base);
void Fname_char(CL_FORM *base);
void Fmake_instance(CL_FORM *base, int nargs);
void Freinitialize_instance(CL_FORM *base, int nargs);
void rt_typep_class(CL_FORM *base);
void Fslot_value(CL_FORM *base);
void Fset_slot_value(CL_FORM *base);
void Fslot_boundp(CL_FORM *base);
void Fslot_makunbound(CL_FORM *base);
void Fclass_of(CL_FORM *base);
void Fno_next_method(CL_FORM *base);
void Fno_applicable_method(CL_FORM *base, int nargs);
void Fslot_missing(CL_FORM *base);
void Fslot_unbound(CL_FORM *base);
void Fcoerce(CL_FORM *base);
void Fopen(CL_FORM *base, int nargs);
void Ffile_position(CL_FORM *base, int nargs);
void Ffile_length(CL_FORM *base);
void Fread_char(CL_FORM *base, int nargs);
void Funread_char(CL_FORM *base, int nargs);
void Fwrite_char(CL_FORM *base, int nargs);
void pattern_p(CL_FORM *base);
extern GLOBAL_FUNARG Cpattern_p;
void pattern_pieces(CL_FORM *base);
void patternE(CL_FORM *base);
void compare_component(CL_FORM *base);
void Pmake_pathname(CL_FORM *base, int nargs);
extern GLOBAL_FUNARG CPmake_pathname;
void Fpathnamep(CL_FORM *base);
void Ppathname_host(CL_FORM *base);
void Ppathname_device(CL_FORM *base);
void Ppathname_directory(CL_FORM *base);
void Ppathname_name(CL_FORM *base);
void Ppathname_type(CL_FORM *base);
void Ppathname_version(CL_FORM *base);
void Pprint_pathname(CL_FORM *base);
extern GLOBAL_FUNARG CPprint_pathname;
void make_host(CL_FORM *base, int nargs);
extern GLOBAL_FUNARG Cmake_host;
void Fparse_namestring(CL_FORM *base, int nargs);
void Fpathname(CL_FORM *base);
void maybe_diddle_case(CL_FORM *base);
void merge_directories(CL_FORM *base);
void Fmerge_pathnames(CL_FORM *base, int nargs);
void Fmake_pathname(CL_FORM *base, int nargs);
void Fpathname_host(CL_FORM *base, int nargs);
void Fpathname_device(CL_FORM *base, int nargs);
void Fpathname_directory(CL_FORM *base, int nargs);
void Fpathname_name(CL_FORM *base, int nargs);
void Fpathname_type(CL_FORM *base, int nargs);
void Fpathname_version(CL_FORM *base);
void Fnamestring(CL_FORM *base);
void Fhost_namestring(CL_FORM *base);
void Fdirectory_namestring(CL_FORM *base);
void Ffile_namestring(CL_FORM *base);
void Fenough_namestring(CL_FORM *base, int nargs);
void Fwild_pathname_p(CL_FORM *base, int nargs);
void pattern_matches(CL_FORM *base);
void components_match(CL_FORM *base);
void Fpathname_match_p(CL_FORM *base);
void remove_backslashes(CL_FORM *base);
void maybe_make_pattern(CL_FORM *base);
void parse_unix_namestring(CL_FORM *base);
extern GLOBAL_FUNARG Cparse_unix_namestring;
void unparse_unix_host(CL_FORM *base);
extern GLOBAL_FUNARG Cunparse_unix_host;
void unparse_unix_piece(CL_FORM *base);
void unparse_unix_directory_list(CL_FORM *base);
void unparse_unix_directory(CL_FORM *base);
extern GLOBAL_FUNARG Cunparse_unix_directory;
void unparse_unix_file(CL_FORM *base);
extern GLOBAL_FUNARG Cunparse_unix_file;
void unparse_unix_namestring(CL_FORM *base);
extern GLOBAL_FUNARG Cunparse_unix_namestring;
void unparse_unix_enough(CL_FORM *base);
extern GLOBAL_FUNARG Cunparse_unix_enough;
void Penumerate_matches(CL_FORM *base);
void Penumerate_directories(CL_FORM *base);
void Penumerate_files(CL_FORM *base);
void quick_integer_to_string(CL_FORM *base);
void Ftruename(CL_FORM *base);
void Fprobe_file(CL_FORM *base);
void Fdirectory(CL_FORM *base, int nargs);
void Fmapc(CL_FORM *base, int nargs);
void Fmapl(CL_FORM *base, int nargs);
void Fmapcar(CL_FORM *base, int nargs);
void Fmaplist(CL_FORM *base, int nargs);
void Fmapcan(CL_FORM *base, int nargs);
void Fmapcon(CL_FORM *base, int nargs);
void Fidentity(CL_FORM *base);
extern GLOBAL_FUNARG CFidentity;
void Fdocumentation(CL_FORM *base);
void Fset_documentation(CL_FORM *base);
void Fmax(CL_FORM *base, int nargs);
void Fmin(CL_FORM *base, int nargs);
extern GLOBAL_FUNARG CFmin;
void Fexpt(CL_FORM *base);
void Flog(CL_FORM *base, int nargs);
void Fisqrt(CL_FORM *base);
void Fabs(CL_FORM *base);
void Ffloat(CL_FORM *base, int nargs);
void Ffloor(CL_FORM *base, int nargs);
void Fceiling(CL_FORM *base, int nargs);
void Ftruncate(CL_FORM *base, int nargs);
void Fround(CL_FORM *base, int nargs);
void Fmod(CL_FORM *base);
void Frem(CL_FORM *base);
void Fscale_float(CL_FORM *base);
void Ffloat_radix(CL_FORM *base);
void Ffloat_sign(CL_FORM *base, int nargs);
void Ffloat_precision(CL_FORM *base);
void Finteger_decode_float(CL_FORM *base);
void Flogior(CL_FORM *base, int nargs);
void Flogxor(CL_FORM *base, int nargs);
void Flogand(CL_FORM *base, int nargs);
void Flogeqv(CL_FORM *base, int nargs);
void Flognand(CL_FORM *base);
void Flognor(CL_FORM *base);
void Flogandc1(CL_FORM *base);
void Flogandc2(CL_FORM *base);
void Flogorc1(CL_FORM *base);
void Flogorc2(CL_FORM *base);
void Flognot(CL_FORM *base);
void Flogtest(CL_FORM *base);
void Flogbitp(CL_FORM *base);
void Fash(CL_FORM *base);
void rt_struct_typep(CL_FORM *base);
void rt_struct_type(CL_FORM *base);
void rt_make_struct(CL_FORM *base, int nargs);
void rt_copy_struct(CL_FORM *base);
void rt_struct_ref(CL_FORM *base);
void rt_set_struct_ref(CL_FORM *base);
void rt_struct_constructor(CL_FORM *base);
void rt_set_struct_constructor(CL_FORM *base);
void rt_struct_printer(CL_FORM *base);
void rt_set_struct_printer(CL_FORM *base);
void raw_make_package(CL_FORM *base, int nargs);
extern GLOBAL_FUNARG Craw_make_package;
void Fpackagep(CL_FORM *base);
void Ppackage_name(CL_FORM *base);
void Ppackage_nicknames(CL_FORM *base);
void set_Ppackage_nicknames(CL_FORM *base);
void Ppackage_internal(CL_FORM *base);
void Ppackage_external(CL_FORM *base);
void Ppackage_shadowings(CL_FORM *base);
void Ppackage_use_list(CL_FORM *base);
void Ppackage_used_by_list(CL_FORM *base);
void Fpackage_name(CL_FORM *base);
void Fpackage_nicknames(CL_FORM *base);
void del_pack_sym(CL_FORM *base);
void coerce_to_package(CL_FORM *base);
void add_nicknames(CL_FORM *base);
void Fmake_package(CL_FORM *base, int nargs);
void rt_ensure_package(CL_FORM *base);
void Fin_package(CL_FORM *base, int nargs);
void Ffind_package(CL_FORM *base);
void Frename_package(CL_FORM *base, int nargs);
void Fpackage_use_list(CL_FORM *base);
void Fpackage_used_by_list(CL_FORM *base);
void Fpackage_shadowing_symbols(CL_FORM *base);
void Flist_all_packages(CL_FORM *base);
void Fintern(CL_FORM *base, int nargs);
void Ffind_symbol(CL_FORM *base, int nargs);
void Funintern(CL_FORM *base, int nargs);
void Fexport(CL_FORM *base, int nargs);
void Funexport(CL_FORM *base, int nargs);
void Fimport(CL_FORM *base, int nargs);
void internal_import(CL_FORM *base);
void Fshadowing_import(CL_FORM *base, int nargs);
void Fshadow(CL_FORM *base, int nargs);
void Fuse_package(CL_FORM *base, int nargs);
void Funuse_package(CL_FORM *base, int nargs);
void Ffind_all_symbols(CL_FORM *base);
void rt_do_symbols_iterator(CL_FORM *base);
void rt_do_external_symbols_iterator(CL_FORM *base);
void rt_do_all_symbols_iterator(CL_FORM *base);
void rt_setup_symbol(CL_FORM *base);
void Ftypep(CL_FORM *base);
void Fsubtypep(CL_FORM *base);
void Fnot(CL_FORM *base);
void Fnull(CL_FORM *base);
void check_integer(CL_FORM *base);
void rt_check_array(CL_FORM *base);
void rt_check_simple_array(CL_FORM *base);
void check_array_internal(CL_FORM *base);
void new_hash_table(CL_FORM *base, int nargs);
extern GLOBAL_FUNARG Cnew_hash_table;
void Fhash_table_p(CL_FORM *base);
void Fhash_table_size(CL_FORM *base);
void Fset_hash_table_size(CL_FORM *base);
void Fhash_table_count(CL_FORM *base);
void Fset_hash_table_count(CL_FORM *base);
void Fhash_table_rehash_size(CL_FORM *base);
void Fset_hash_table_rehash_size(CL_FORM *base);
void Fhash_table_rehash_threshold(CL_FORM *base);
void Fset_hash_table_rehash_threshold(CL_FORM *base);
void Fhash_table_test(CL_FORM *base);
void Fset_hash_table_test(CL_FORM *base);
void hash_table_array(CL_FORM *base);
void Fmake_hash_table(CL_FORM *base, int nargs);
void Fgethash(CL_FORM *base, int nargs);
void Fset_gethash(CL_FORM *base, int nargs);
void Fremhash(CL_FORM *base);
void Fmaphash(CL_FORM *base);
void Fclrhash(CL_FORM *base);
void Fsxhash(CL_FORM *base);
void internal_sxhash(CL_FORM *base);
void backquote_reader(CL_FORM *base);
extern GLOBAL_FUNARG Cbackquote_reader;
void comma_reader(CL_FORM *base);
extern GLOBAL_FUNARG Ccomma_reader;
void bq_process(CL_FORM *base);
void maptree(CL_FORM *base);
void bq_splicing_frob(CL_FORM *base);
extern GLOBAL_FUNARG Cbq_splicing_frob;
void bq_simplify(CL_FORM *base);
extern GLOBAL_FUNARG Cbq_simplify;
void null_or_quoted(CL_FORM *base);
extern GLOBAL_FUNARG Cnull_or_quoted;
void bq_attach_append(CL_FORM *base);
void bq_attach_conses(CL_FORM *base);
void bq_remove_tokens(CL_FORM *base);
extern GLOBAL_FUNARG Cbq_remove_tokens;
void make_readtable(CL_FORM *base, int nargs);
extern GLOBAL_FUNARG Cmake_readtable;
void Freadtablep(CL_FORM *base);
void readtable_syntax(CL_FORM *base);
void readtable_dispatch(CL_FORM *base);
void Fcopy_readtable(CL_FORM *base, int nargs);
void Fset_syntax_from_char(CL_FORM *base, int nargs);
void copy_dispatch_macro_character(CL_FORM *base);
void Fset_macro_character(CL_FORM *base, int nargs);
void Fget_macro_character(CL_FORM *base, int nargs);
void Fmake_dispatch_macro_character(CL_FORM *base, int nargs);
void Fset_dispatch_macro_character(CL_FORM *base, int nargs);
void Fget_dispatch_macro_character(CL_FORM *base, int nargs);
void read_token(CL_FORM *base);
void cons_reader(CL_FORM *base);
extern GLOBAL_FUNARG Ccons_reader;
void right_parenthesis_reader(CL_FORM *base);
extern GLOBAL_FUNARG Cright_parenthesis_reader;
void quote_reader(CL_FORM *base);
extern GLOBAL_FUNARG Cquote_reader;
void semicolon_reader(CL_FORM *base);
extern GLOBAL_FUNARG Csemicolon_reader;
void string_reader(CL_FORM *base);
extern GLOBAL_FUNARG Cstring_reader;
void char_reader(CL_FORM *base);
extern GLOBAL_FUNARG Cchar_reader;
void function_reader(CL_FORM *base);
extern GLOBAL_FUNARG Cfunction_reader;
void vector_reader(CL_FORM *base);
extern GLOBAL_FUNARG Cvector_reader;
void binary_reader(CL_FORM *base);
extern GLOBAL_FUNARG Cbinary_reader;
void octal_reader(CL_FORM *base);
extern GLOBAL_FUNARG Coctal_reader;
void hex_reader(CL_FORM *base);
extern GLOBAL_FUNARG Chex_reader;
void radix_reader(CL_FORM *base);
extern GLOBAL_FUNARG Cradix_reader;
void uninterned_reader(CL_FORM *base);
extern GLOBAL_FUNARG Cuninterned_reader;
void array_reader(CL_FORM *base);
extern GLOBAL_FUNARG Carray_reader;
void struct_reader(CL_FORM *base);
extern GLOBAL_FUNARG Cstruct_reader;
void feature_plus_reader(CL_FORM *base);
extern GLOBAL_FUNARG Cfeature_plus_reader;
void feature_minus_reader(CL_FORM *base);
extern GLOBAL_FUNARG Cfeature_minus_reader;
void eval_feature(CL_FORM *base);
void comment_block_reader(CL_FORM *base);
extern GLOBAL_FUNARG Ccomment_block_reader;
void internal_read(CL_FORM *base);
void Fread(CL_FORM *base, int nargs);
void Fread_preserving_whitespace(CL_FORM *base, int nargs);
void Fread_delimited_list(CL_FORM *base, int nargs);
void Fread_line(CL_FORM *base, int nargs);
void Fpeek_char(CL_FORM *base, int nargs);
void Fread_from_string(CL_FORM *base, int nargs);
void Fparse_integer(CL_FORM *base, int nargs);
void Fwrite(CL_FORM *base, int nargs);
void print_integer(CL_FORM *base);
void print_float(CL_FORM *base);
void write2(CL_FORM *base);
void Fprin1(CL_FORM *base, int nargs);
void Fprint(CL_FORM *base, int nargs);
void Fpprint(CL_FORM *base, int nargs);
void Fprinc(CL_FORM *base, int nargs);
void Fwrite_to_string(CL_FORM *base, int nargs);
void Fprin1_to_string(CL_FORM *base);
void Fprinc_to_string(CL_FORM *base);
void Fwrite_string(CL_FORM *base, int nargs);
extern GLOBAL_FUNARG CFwrite_string;
void Fwrite_line(CL_FORM *base, int nargs);
void Fterpri(CL_FORM *base, int nargs);
void Ffresh_line(CL_FORM *base, int nargs);
void Fformat(CL_FORM *base, int nargs);
void format2(CL_FORM *base, int nargs);
void Ferror(CL_FORM *base, int nargs);
void error_in(CL_FORM *base, int nargs);
void Fwarn(CL_FORM *base, int nargs);
void Fbreak(CL_FORM *base, int nargs);
void sequence_type(CL_FORM *base);
void check_seq_start_end(CL_FORM *base);
void add_q(CL_FORM *base);
void Fcomplement(CL_FORM *base);
void Felt(CL_FORM *base);
void Fset_elt(CL_FORM *base);
void Fsubseq(CL_FORM *base, int nargs);
void Fcopy_seq(CL_FORM *base);
void Flength(CL_FORM *base);
extern GLOBAL_FUNARG CFlength;
void Freverse(CL_FORM *base);
void Fnreverse(CL_FORM *base);
void list_nreverse(CL_FORM *base);
void Fmake_sequence(CL_FORM *base, int nargs);
void Fconcatenate(CL_FORM *base, int nargs);
extern GLOBAL_FUNARG CFconcatenate;
void concatenate_to_non_list(CL_FORM *base, int nargs);
extern GLOBAL_FUNARG Cconcatenate_to_non_list;
void concatenate_to_list(CL_FORM *base, int nargs);
extern GLOBAL_FUNARG Cconcatenate_to_list;
void Fmap(CL_FORM *base, int nargs);
void Fsome(CL_FORM *base, int nargs);
extern GLOBAL_FUNARG CFsome;
void Fevery(CL_FORM *base, int nargs);
extern GLOBAL_FUNARG CFevery;
void Fnotany(CL_FORM *base, int nargs);
void Fnotevery(CL_FORM *base, int nargs);
void Freduce(CL_FORM *base, int nargs);
void Ffill(CL_FORM *base, int nargs);
void Freplace(CL_FORM *base, int nargs);
void Fremove(CL_FORM *base, int nargs);
extern GLOBAL_FUNARG CFremove;
void list_remove(CL_FORM *base, int nargs);
extern GLOBAL_FUNARG Clist_remove;
void vector_remove(CL_FORM *base, int nargs);
extern GLOBAL_FUNARG Cvector_remove;
void Fremove_if(CL_FORM *base, int nargs);
void Fremove_if_not(CL_FORM *base, int nargs);
void Fdelete(CL_FORM *base, int nargs);
extern GLOBAL_FUNARG CFdelete;
void Fdelete_if(CL_FORM *base, int nargs);
void Fdelete_if_not(CL_FORM *base, int nargs);
void Fremove_duplicates(CL_FORM *base, int nargs);
extern GLOBAL_FUNARG CFremove_duplicates;
void Fdelete_duplicates(CL_FORM *base, int nargs);
void Ffind(CL_FORM *base, int nargs);
extern GLOBAL_FUNARG CFfind;
void vector_find(CL_FORM *base, int nargs);
extern GLOBAL_FUNARG Cvector_find;
void list_find(CL_FORM *base, int nargs);
extern GLOBAL_FUNARG Clist_find;
void Ffind_if(CL_FORM *base, int nargs);
void Ffind_if_not(CL_FORM *base, int nargs);
void Fposition(CL_FORM *base, int nargs);
extern GLOBAL_FUNARG CFposition;
void vector_position(CL_FORM *base, int nargs);
extern GLOBAL_FUNARG Cvector_position;
void list_position(CL_FORM *base, int nargs);
extern GLOBAL_FUNARG Clist_position;
void Fposition_if(CL_FORM *base, int nargs);
void Fposition_if_not(CL_FORM *base, int nargs);
void Fcount(CL_FORM *base, int nargs);
extern GLOBAL_FUNARG CFcount;
void Fcount_if(CL_FORM *base, int nargs);
void Fcount_if_not(CL_FORM *base, int nargs);
void Fmismatch(CL_FORM *base, int nargs);
void Fsearch(CL_FORM *base, int nargs);
void Fsubstitute(CL_FORM *base, int nargs);
void Fsort(CL_FORM *base, int nargs);
void list_merge_sort(CL_FORM *base);
void quick_sort(CL_FORM *base);
void Fcar(CL_FORM *base);
extern GLOBAL_FUNARG CFcar;
void Fcdr(CL_FORM *base);
void Fset_car(CL_FORM *base);
void Fset_cdr(CL_FORM *base);
void Fcaar(CL_FORM *base);
void Fcadr(CL_FORM *base);
extern GLOBAL_FUNARG CFcadr;
void Fcdar(CL_FORM *base);
void Fcddr(CL_FORM *base);
void Fcaaar(CL_FORM *base);
void Fcaadr(CL_FORM *base);
void Fcadar(CL_FORM *base);
void Fcaddr(CL_FORM *base);
void Fcdaar(CL_FORM *base);
void Fcdadr(CL_FORM *base);
void Fcddar(CL_FORM *base);
void Fcdddr(CL_FORM *base);
void Fcaaaar(CL_FORM *base);
void Fcaaadr(CL_FORM *base);
void Fcaadar(CL_FORM *base);
void Fcaaddr(CL_FORM *base);
void Fcadaar(CL_FORM *base);
void Fcadadr(CL_FORM *base);
void Fcaddar(CL_FORM *base);
void Fcadddr(CL_FORM *base);
void Fcdaaar(CL_FORM *base);
void Fcdaadr(CL_FORM *base);
void Fcdadar(CL_FORM *base);
void Fcdaddr(CL_FORM *base);
void Fcddaar(CL_FORM *base);
void Fcddadr(CL_FORM *base);
void Fcdddar(CL_FORM *base);
void Fcddddr(CL_FORM *base);
void Fset_caar(CL_FORM *base);
void Fset_cadr(CL_FORM *base);
void Fset_cdar(CL_FORM *base);
void Fset_cddr(CL_FORM *base);
void Fset_caaar(CL_FORM *base);
void Fset_caadr(CL_FORM *base);
void Fset_cadar(CL_FORM *base);
void Fset_caddr(CL_FORM *base);
void Fset_cdaar(CL_FORM *base);
void Fset_cdadr(CL_FORM *base);
void Fset_cddar(CL_FORM *base);
void Fset_cdddr(CL_FORM *base);
void Fset_caaaar(CL_FORM *base);
void Fset_caaadr(CL_FORM *base);
void Fset_caadar(CL_FORM *base);
void Fset_caaddr(CL_FORM *base);
void Fset_cadaar(CL_FORM *base);
void Fset_cadadr(CL_FORM *base);
void Fset_caddar(CL_FORM *base);
void Fset_cadddr(CL_FORM *base);
void Fset_cdaaar(CL_FORM *base);
void Fset_cdaadr(CL_FORM *base);
void Fset_cdadar(CL_FORM *base);
void Fset_cdaddr(CL_FORM *base);
void Fset_cddaar(CL_FORM *base);
void Fset_cddadr(CL_FORM *base);
void Fset_cdddar(CL_FORM *base);
void Fset_cddddr(CL_FORM *base);
void Ftree_equal(CL_FORM *base, int nargs);
void Fendp(CL_FORM *base);
void Flist_length(CL_FORM *base);
void Fnth(CL_FORM *base);
void Fset_nth(CL_FORM *base);
void Ffirst(CL_FORM *base);
void Frest(CL_FORM *base);
void Fsecond(CL_FORM *base);
void Fthird(CL_FORM *base);
extern GLOBAL_FUNARG CFthird;
void Ffourth(CL_FORM *base);
void Ffifth(CL_FORM *base);
void Fsixth(CL_FORM *base);
void Fseventh(CL_FORM *base);
void Feighth(CL_FORM *base);
void Fninth(CL_FORM *base);
void Ftenth(CL_FORM *base);
void Fset_first(CL_FORM *base);
void Fset_rest(CL_FORM *base);
void Fset_second(CL_FORM *base);
void Fset_third(CL_FORM *base);
void Fset_fourth(CL_FORM *base);
void Fset_fifth(CL_FORM *base);
void Fset_sixth(CL_FORM *base);
void Fset_seventh(CL_FORM *base);
void Fset_eighth(CL_FORM *base);
void Fset_ninth(CL_FORM *base);
void Fset_tenth(CL_FORM *base);
void Fnthcdr(CL_FORM *base);
void Flast(CL_FORM *base, int nargs);
void Fmake_list(CL_FORM *base, int nargs);
void Fcopy_list(CL_FORM *base);
void Fcopy_alist(CL_FORM *base);
void Fcopy_tree(CL_FORM *base);
void Frevappend(CL_FORM *base);
void Fnconc(CL_FORM *base, int nargs);
extern GLOBAL_FUNARG CFnconc;
void Fnreconc(CL_FORM *base);
void Fbutlast(CL_FORM *base, int nargs);
void Fnbutlast(CL_FORM *base, int nargs);
void Fldiff(CL_FORM *base);
void Frplaca(CL_FORM *base);
void Frplacd(CL_FORM *base);
void Fsubst(CL_FORM *base, int nargs);
void Fsubst_if(CL_FORM *base, int nargs);
void Fsubst_if_not(CL_FORM *base, int nargs);
void Fnsubst(CL_FORM *base, int nargs);
void Fnsubst_if(CL_FORM *base, int nargs);
void Fnsubst_if_not(CL_FORM *base, int nargs);
void Fsublis(CL_FORM *base, int nargs);
void Fnsublis(CL_FORM *base, int nargs);
void Fmember(CL_FORM *base, int nargs);
void Fmember_if(CL_FORM *base, int nargs);
void Fmember_if_not(CL_FORM *base, int nargs);
void Ftailp(CL_FORM *base);
void Fadjoin(CL_FORM *base, int nargs);
void Funion(CL_FORM *base, int nargs);
void Fnunion(CL_FORM *base, int nargs);
void Fintersection(CL_FORM *base, int nargs);
void Fset_difference(CL_FORM *base, int nargs);
void Fsubsetp(CL_FORM *base, int nargs);
void Facons(CL_FORM *base);
void Fpairlis(CL_FORM *base, int nargs);
void rt_simple_assoc(CL_FORM *base);
void Fassoc(CL_FORM *base, int nargs);
void Fassoc_if(CL_FORM *base, int nargs);
void Fassoc_if_not(CL_FORM *base, int nargs);
void Frassoc(CL_FORM *base, int nargs);
void Frassoc_if(CL_FORM *base, int nargs);
void Frassoc_if_not(CL_FORM *base, int nargs);
void Fchar(CL_FORM *base);
void Fset_char(CL_FORM *base);
void Fschar(CL_FORM *base);
void Fset_schar(CL_FORM *base);
void FstringE(CL_FORM *base, int nargs);
extern GLOBAL_FUNARG CFstringE;
void Fstring_equal(CL_FORM *base, int nargs);
void FstringL(CL_FORM *base, int nargs);
extern GLOBAL_FUNARG CFstringL;
void FstringG(CL_FORM *base, int nargs);
void FstringLE(CL_FORM *base, int nargs);
void FstringGE(CL_FORM *base, int nargs);
void FstringNE(CL_FORM *base, int nargs);
void Fstring_lessp(CL_FORM *base, int nargs);
void Fstring_greaterp(CL_FORM *base, int nargs);
void Fstring_not_greaterp(CL_FORM *base, int nargs);
void Fstring_not_lessp(CL_FORM *base, int nargs);
void Fstring_not_equal(CL_FORM *base, int nargs);
void Fmake_string(CL_FORM *base, int nargs);
void Fstring_trim(CL_FORM *base);
void Fstring_left_trim(CL_FORM *base);
void Fstring_right_trim(CL_FORM *base);
void Fstring_upcase(CL_FORM *base, int nargs);
extern GLOBAL_FUNARG CFstring_upcase;
void Fstring_downcase(CL_FORM *base, int nargs);
extern GLOBAL_FUNARG CFstring_downcase;
void Fstring_capitalize(CL_FORM *base, int nargs);
void Fnstring_upcase(CL_FORM *base, int nargs);
void Fnstring_downcase(CL_FORM *base, int nargs);
void Fnstring_capitalize(CL_FORM *base, int nargs);
void Fstring(CL_FORM *base);
void Fequal(CL_FORM *base);
extern GLOBAL_FUNARG CFequal;
void Fequalp(CL_FORM *base);
extern GLOBAL_FUNARG CFequalp;
void Fget(CL_FORM *base, int nargs);
void Fset_get(CL_FORM *base, int nargs);
void Fremprop(CL_FORM *base);
void get_prop(CL_FORM *base);
void rt_set_prop(CL_FORM *base);
void Fgetf(CL_FORM *base, int nargs);
void rt_remf_internal(CL_FORM *base);
void Fget_properties(CL_FORM *base);
void Fmake_symbol(CL_FORM *base);
void Fcopy_symbol(CL_FORM *base, int nargs);
void Fgensym(CL_FORM *base, int nargs);
void Fgentemp(CL_FORM *base, int nargs);
void Fkeywordp(CL_FORM *base);
void Fsymbol_value(CL_FORM *base);
void Fset(CL_FORM *base);
void Fsymbol_plist(CL_FORM *base);
void Fset_symbol_plist(CL_FORM *base);
void Fsymbol_name(CL_FORM *base);
void Fsymbol_package(CL_FORM *base);
void set_symbol_package(CL_FORM *base);
void Fboundp(CL_FORM *base);
void Fmakunbound(CL_FORM *base);
void rt_the_type_error(CL_FORM *base);
void Fy_or_n_p(CL_FORM *base, int nargs);
void Fyes_or_no_p(CL_FORM *base, int nargs);
void FFI_c_char(CL_FORM *base);
void FFI_c_short(CL_FORM *base);
void FFI_c_int(CL_FORM *base);
void FFI_c_long(CL_FORM *base);
void FFI_c_unsigned_char(CL_FORM *base);
void FFI_c_unsigned_short(CL_FORM *base);
void FFI_c_unsigned_int(CL_FORM *base);
void FFI_c_unsigned_long(CL_FORM *base);
void FFI_c_float(CL_FORM *base);
void FFI_c_double(CL_FORM *base);
void FFI_c_long_double(CL_FORM *base);
void FFI_make_c_string(CL_FORM *base);
void FFI_copy_c_string(CL_FORM *base);
void FFI_lisp_character(CL_FORM *base);
void FFI_lisp_integer(CL_FORM *base);
void FFI_lisp_float(CL_FORM *base);
void FFI_make_lisp_string(CL_FORM *base);
void c_getenv(CL_FORM *base);
void c_system(CL_FORM *base);
void rt_startup(CL_FORM *base);
