/* xrtm_brdf.c */
int kernel_is_valid(enum xrtm_kernel_type type);
int kernel_n_params(enum xrtm_kernel_type type);
int brdf_needs_fourier(enum xrtm_kernel_type *kernels, int n_kernels);
int brdf_aux_alloc(brdf_aux_data *aux, int n_quad, int n_kernel_quad);
void brdf_aux_calc_base(brdf_aux_data *aux, int n_quad, double *qx, int n_kernel_quad, double *kernel_qx);
void brdf_aux_calc_part(brdf_aux_data *aux, int i_quad, int n_quad, double *qx, int n_kernel_quad, double *kernel_qx);
void brdf_aux_calc_mu_0(brdf_aux_data *aux, int n_quad, double mu_0, int n_kernel_quad, double *kernel_qx);
void brdf_aux_free(brdf_aux_data *aux);
void brdf_build_kernel_vecs(int i_offset, int n_quad, int j_offset, int n_stokes, int n_derivs, int n_kernels, int n_kernel_quad, enum xrtm_kernel_type *kernels, double *ampfac, double **ampfac_l, double **params, double ***params_l, double *kernel_qx, double *kernel_qw, brdf_aux_data *aux, double **kernel_f, double ***kernel_f_l, uchar *derivs, work_data work);
void brdf_build_ref_vec(int i_four, int i_offset, int n_quad, int j_offset, int n_stokes, double qf, double *qx_v, double *qw_v, int n_kernels, int n_kernel_quad, enum xrtm_kernel_type *kernels, double *kernel_qx, double *kernel_qw, double **kernel_f, double *R_s, work_data work);
void brdf_build_kernel_mats(int i_offset, int n_quad1, int j_offset, int n_quad2, int n_stokes, int n_derivs, int n_kernels, int n_kernel_quad, enum xrtm_kernel_type *kernels, double *ampfac, double **ampfac_l, double **params, double ***params_l, double *kernel_qx, double *kernel_qw, brdf_aux_data *aux, double ***kernel_f, double ****kernel_f_l, uchar *derivs, work_data work);
void brdf_build_ref_mat(int i_four, int i_offset, int n_quad1, int j_offset, int n_quad2, int n_stokes, double qf, double *qx_v, double *qw_v, int n_kernels, int n_kernel_quad, enum xrtm_kernel_type *kernels, double *kernel_qx, double *kernel_qw, double ***kernel_f, double **R_s, work_data work);
