/*******************************************************************************
 * This file was generated by bindx version 0.01.  Edit at your own risk.
 ******************************************************************************/

#include <gutil.h>

#include <xrtm_interface.h>

#ifdef __cplusplus
extern "C" {
#endif


int xrtm_create_bindx_f77_(xrtm_data *d, int *options_, int *solvers_, int *max_coef_, int *n_quad_, int *n_stokes_, int *n_derivs_, int *n_layers_, int *n_kernels_, int *n_kernel_quad_, enum xrtm_kernel_type *kernels, int *n_out_levels_, int *n_out_thetas_) {
     int options;
     int solvers;
     int max_coef;
     int n_quad;
     int n_stokes;
     int n_derivs;
     int n_layers;
     int n_kernels;
     int n_kernel_quad;
     int n_out_levels;
     int n_out_thetas;
     options = *options_;
     solvers = *solvers_;
     max_coef = *max_coef_;
     n_quad = *n_quad_;
     n_stokes = *n_stokes_;
     n_derivs = *n_derivs_;
     n_layers = *n_layers_;
     n_kernels = *n_kernels_;
     n_kernel_quad = *n_kernel_quad_;
     n_out_levels = *n_out_levels_;
     n_out_thetas = *n_out_thetas_;
     if (xrtm_create(d, options, solvers, max_coef, n_quad, n_stokes, n_derivs, n_layers, n_kernels, n_kernel_quad, (enum xrtm_kernel_type*) kernels, n_out_levels, n_out_thetas)) {
          eprintf("ERROR: xrtm_create()\n");
          return -1;
     }
     return 0;
}


int xrtm_destroy_bindx_f77_(xrtm_data *d) {
     if (xrtm_destroy(d)) {
          eprintf("ERROR: xrtm_destroy()\n");
          return -1;
     }
     return 0;
}


int xrtm_get_options_bindx_f77_(xrtm_data *d) {
     if (xrtm_get_options(d)) {
          eprintf("ERROR: xrtm_get_options()\n");
          return -1;
     }
     return 0;
}


int xrtm_get_solvers_bindx_f77_(xrtm_data *d) {
     if (xrtm_get_solvers(d)) {
          eprintf("ERROR: xrtm_get_solvers()\n");
          return -1;
     }
     return 0;
}


int xrtm_get_max_coef_bindx_f77_(xrtm_data *d) {
     if (xrtm_get_max_coef(d)) {
          eprintf("ERROR: xrtm_get_max_coef()\n");
          return -1;
     }
     return 0;
}


int xrtm_get_n_quad_bindx_f77_(xrtm_data *d) {
     if (xrtm_get_n_quad(d)) {
          eprintf("ERROR: xrtm_get_n_quad()\n");
          return -1;
     }
     return 0;
}


int xrtm_get_n_stokes_bindx_f77_(xrtm_data *d) {
     if (xrtm_get_n_stokes(d)) {
          eprintf("ERROR: xrtm_get_n_stokes()\n");
          return -1;
     }
     return 0;
}


int xrtm_get_n_derivs_bindx_f77_(xrtm_data *d) {
     if (xrtm_get_n_derivs(d)) {
          eprintf("ERROR: xrtm_get_n_derivs()\n");
          return -1;
     }
     return 0;
}


int xrtm_get_n_layers_bindx_f77_(xrtm_data *d) {
     if (xrtm_get_n_layers(d)) {
          eprintf("ERROR: xrtm_get_n_layers()\n");
          return -1;
     }
     return 0;
}


int xrtm_get_n_kernels_bindx_f77_(xrtm_data *d) {
     if (xrtm_get_n_kernels(d)) {
          eprintf("ERROR: xrtm_get_n_kernels()\n");
          return -1;
     }
     return 0;
}


int xrtm_get_n_kernel_quad_bindx_f77_(xrtm_data *d) {
     if (xrtm_get_n_kernel_quad(d)) {
          eprintf("ERROR: xrtm_get_n_kernel_quad()\n");
          return -1;
     }
     return 0;
}


int xrtm_get_kernel_bindx_f77_(xrtm_data *d, int *i_kernel_) {
     int i_kernel;
     i_kernel = *i_kernel_;
     if (xrtm_get_kernel(d, i_kernel)) {
          eprintf("ERROR: xrtm_get_kernel()\n");
          return -1;
     }
     return 0;
}


int xrtm_get_n_out_levels_bindx_f77_(xrtm_data *d) {
     if (xrtm_get_n_out_levels(d)) {
          eprintf("ERROR: xrtm_get_n_out_levels()\n");
          return -1;
     }
     return 0;
}


int xrtm_get_n_out_thetas_bindx_f77_(xrtm_data *d) {
     if (xrtm_get_n_out_thetas(d)) {
          eprintf("ERROR: xrtm_get_n_out_thetas()\n");
          return -1;
     }
     return 0;
}


int xrtm_set_doub_d_tau_bindx_f77_(xrtm_data *d, double *d_tau_) {
     double d_tau;
     d_tau = *d_tau_;
     if (xrtm_set_doub_d_tau(d, d_tau)) {
          eprintf("ERROR: xrtm_set_doub_d_tau()\n");
          return -1;
     }
     return 0;
}


double xrtm_get_doub_d_tau_bindx_f77_(xrtm_data *d) {
     if (xrtm_get_doub_d_tau(d)) {
          eprintf("ERROR: xrtm_get_doub_d_tau()\n");
          return -1;
     }
     return 0;
}


int xrtm_set_pade_params_bindx_f77_(xrtm_data *d, int *pade_s_, int *pade_r_) {
     int pade_s;
     int pade_r;
     pade_s = *pade_s_;
     pade_r = *pade_r_;
     if (xrtm_set_pade_params(d, pade_s, pade_r)) {
          eprintf("ERROR: xrtm_set_pade_params()\n");
          return -1;
     }
     return 0;
}


int xrtm_get_pade_params_bindx_f77_(xrtm_data *d, int *pade_s, int *pade_r) {
     if (xrtm_get_pade_params(d, pade_s, pade_r)) {
          eprintf("ERROR: xrtm_get_pade_params()\n");
          return -1;
     }
     return 0;
}


int xrtm_set_sos_params_bindx_f77_(xrtm_data *d, int *max_os_, double *max_tau_, double *sos_tol_) {
     int max_os;
     double max_tau;
     double sos_tol;
     max_os = *max_os_;
     max_tau = *max_tau_;
     sos_tol = *sos_tol_;
     if (xrtm_set_sos_params(d, max_os, max_tau, sos_tol)) {
          eprintf("ERROR: xrtm_set_sos_params()\n");
          return -1;
     }
     return 0;
}


int xrtm_get_sos_params_bindx_f77_(xrtm_data *d, int *max_os, double *max_tau, double *sos_tol) {
     if (xrtm_get_sos_params(d, max_os, max_tau, sos_tol)) {
          eprintf("ERROR: xrtm_get_sos_params()\n");
          return -1;
     }
     return 0;
}


int xrtm_set_fourier_tol_bindx_f77_(xrtm_data *d, double *fourier_tol_) {
     double fourier_tol;
     fourier_tol = *fourier_tol_;
     if (xrtm_set_fourier_tol(d, fourier_tol)) {
          eprintf("ERROR: xrtm_set_fourier_tol()\n");
          return -1;
     }
     return 0;
}


double xrtm_get_fourier_tol_bindx_f77_(xrtm_data *d) {
     if (xrtm_get_fourier_tol(d)) {
          eprintf("ERROR: xrtm_get_fourier_tol()\n");
          return -1;
     }
     return 0;
}


int xrtm_set_lambda_bindx_f77_(xrtm_data *d, double *lambda_) {
     double lambda;
     lambda = *lambda_;
     if (xrtm_set_lambda(d, lambda)) {
          eprintf("ERROR: xrtm_set_lambda()\n");
          return -1;
     }
     return 0;
}


double xrtm_get_lambda_bindx_f77_(xrtm_data *d) {
     if (xrtm_get_lambda(d)) {
          eprintf("ERROR: xrtm_get_lambda()\n");
          return -1;
     }
     return 0;
}


int xrtm_set_f_0_bindx_f77_(xrtm_data *d, double *F_0_) {
     double F_0;
     F_0 = *F_0_;
     if (xrtm_set_F_0(d, F_0)) {
          eprintf("ERROR: xrtm_set_F_0()\n");
          return -1;
     }
     return 0;
}


double xrtm_get_f_0_bindx_f77_(xrtm_data *d) {
     if (xrtm_get_F_0(d)) {
          eprintf("ERROR: xrtm_get_F_0()\n");
          return -1;
     }
     return 0;
}


int xrtm_set_theta_0_bindx_f77_(xrtm_data *d, double *theta_0_) {
     double theta_0;
     theta_0 = *theta_0_;
     if (xrtm_set_theta_0(d, theta_0)) {
          eprintf("ERROR: xrtm_set_theta_0()\n");
          return -1;
     }
     return 0;
}


double xrtm_get_theta_0_bindx_f77_(xrtm_data *d) {
     if (xrtm_get_theta_0(d)) {
          eprintf("ERROR: xrtm_get_theta_0()\n");
          return -1;
     }
     return 0;
}


int xrtm_set_phi_0_bindx_f77_(xrtm_data *d, double *phi_0_) {
     double phi_0;
     phi_0 = *phi_0_;
     if (xrtm_set_phi_0(d, phi_0)) {
          eprintf("ERROR: xrtm_set_phi_0()\n");
          return -1;
     }
     return 0;
}


double xrtm_get_phi_0_bindx_f77_(xrtm_data *d) {
     if (xrtm_get_phi_0(d)) {
          eprintf("ERROR: xrtm_get_phi_0()\n");
          return -1;
     }
     return 0;
}


int xrtm_set_out_levels_bindx_f77_(xrtm_data *d, int *out_levels) {
     if (xrtm_set_out_levels(d, out_levels)) {
          eprintf("ERROR: xrtm_set_out_levels()\n");
          return -1;
     }
     return 0;
}


int xrtm_get_out_levels_bindx_f77_(xrtm_data *d, int *out_levels) {
     if (xrtm_get_out_levels(d, out_levels)) {
          eprintf("ERROR: xrtm_get_out_levels()\n");
          return -1;
     }
     return 0;
}


int xrtm_set_out_taus_bindx_f77_(xrtm_data *d, double *out_taus) {
     if (xrtm_set_out_taus(d, out_taus)) {
          eprintf("ERROR: xrtm_set_out_taus()\n");
          return -1;
     }
     return 0;
}


int xrtm_get_out_taus_bindx_f77_(xrtm_data *d, double *out_taus) {
     if (xrtm_get_out_taus(d, out_taus)) {
          eprintf("ERROR: xrtm_get_out_taus()\n");
          return -1;
     }
     return 0;
}


int xrtm_set_out_thetas_bindx_f77_(xrtm_data *d, double *out_thetas) {
     if (xrtm_set_out_thetas(d, out_thetas)) {
          eprintf("ERROR: xrtm_set_out_thetas()\n");
          return -1;
     }
     return 0;
}


int xrtm_get_out_thetas_bindx_f77_(xrtm_data *d, double *out_thetas) {
     if (xrtm_get_out_thetas(d, out_thetas)) {
          eprintf("ERROR: xrtm_get_out_thetas()\n");
          return -1;
     }
     return 0;
}


int xrtm_set_top_b_bindx_f77_(xrtm_data *d, double *top_b_) {
     double top_b;
     top_b = *top_b_;
     if (xrtm_set_top_b(d, top_b)) {
          eprintf("ERROR: xrtm_set_top_b()\n");
          return -1;
     }
     return 0;
}


double xrtm_get_top_b_bindx_f77_(xrtm_data *d) {
     if (xrtm_get_top_b(d)) {
          eprintf("ERROR: xrtm_get_top_b()\n");
          return -1;
     }
     return 0;
}


int xrtm_set_planet_r_bindx_f77_(xrtm_data *d, double *planet_r_) {
     double planet_r;
     planet_r = *planet_r_;
     if (xrtm_set_planet_r(d, planet_r)) {
          eprintf("ERROR: xrtm_set_planet_r()\n");
          return -1;
     }
     return 0;
}


double xrtm_get_planet_r_bindx_f77_(xrtm_data *d) {
     if (xrtm_get_planet_r(d)) {
          eprintf("ERROR: xrtm_get_planet_r()\n");
          return -1;
     }
     return 0;
}


int xrtm_set_levels_z_bindx_f77_(xrtm_data *d, double *levels_z) {
     if (xrtm_set_levels_z(d, levels_z)) {
          eprintf("ERROR: xrtm_set_levels_z()\n");
          return -1;
     }
     return 0;
}


int xrtm_get_levels_z_bindx_f77_(xrtm_data *d, double *levels_z) {
     if (xrtm_get_levels_z(d, levels_z)) {
          eprintf("ERROR: xrtm_get_levels_z()\n");
          return -1;
     }
     return 0;
}


int xrtm_set_levels_b_bindx_f77_(xrtm_data *d, double *levels_b) {
     if (xrtm_set_levels_b(d, levels_b)) {
          eprintf("ERROR: xrtm_set_levels_b()\n");
          return -1;
     }
     return 0;
}


int xrtm_get_levels_b_bindx_f77_(xrtm_data *d, double *levels_b) {
     if (xrtm_get_levels_b(d, levels_b)) {
          eprintf("ERROR: xrtm_get_levels_b()\n");
          return -1;
     }
     return 0;
}


int xrtm_set_g_1_bindx_f77_(xrtm_data *d, int *i_layer_, double *g_) {
     int i_layer;
     double g;
     i_layer = *i_layer_;
     g = *g_;
     if (xrtm_set_g_1(d, i_layer, g)) {
          eprintf("ERROR: xrtm_set_g_1()\n");
          return -1;
     }
     return 0;
}


int xrtm_set_g_n_bindx_f77_(xrtm_data *d, double *g) {
     if (xrtm_set_g_n(d, g)) {
          eprintf("ERROR: xrtm_set_g_n()\n");
          return -1;
     }
     return 0;
}


double xrtm_get_g_bindx_f77_(xrtm_data *d, int *i_layer_) {
     int i_layer;
     i_layer = *i_layer_;
     if (xrtm_get_g(d, i_layer)) {
          eprintf("ERROR: xrtm_get_g()\n");
          return -1;
     }
     return 0;
}


int xrtm_set_g_l_11_bindx_f77_(xrtm_data *d, int *i_layer_, int *i_deriv_, double *g_l_) {
     int i_layer;
     int i_deriv;
     double g_l;
     i_layer = *i_layer_;
     i_deriv = *i_deriv_;
     g_l = *g_l_;
     if (xrtm_set_g_l_11(d, i_layer, i_deriv, g_l)) {
          eprintf("ERROR: xrtm_set_g_l_11()\n");
          return -1;
     }
     return 0;
}


int xrtm_set_g_l_n1_bindx_f77_(xrtm_data *d, int *i_deriv_, double *g_l) {
     int i_deriv;
     i_deriv = *i_deriv_;
     if (xrtm_set_g_l_n1(d, i_deriv, g_l)) {
          eprintf("ERROR: xrtm_set_g_l_n1()\n");
          return -1;
     }
     return 0;
}


int xrtm_set_g_l_1n_bindx_f77_(xrtm_data *d, int *i_layer_, double *g_l) {
     int i_layer;
     i_layer = *i_layer_;
     if (xrtm_set_g_l_1n(d, i_layer, g_l)) {
          eprintf("ERROR: xrtm_set_g_l_1n()\n");
          return -1;
     }
     return 0;
}


int xrtm_set_g_l_nn_bindx_f77_(xrtm_data *d, double *g_l) {
     double **g_l2;
     g_l2 = array_from_mem2_d(g_l, d->n_layers, d->n_derivs);
     if (xrtm_set_g_l_nn(d, g_l2)) {
          eprintf("ERROR: xrtm_set_g_l_nn()\n");
          return -1;
     }
     free_array2_d(g_l2);
     return 0;
}


double xrtm_get_g_l_bindx_f77_(xrtm_data *d, int *i_layer_, int *i_deriv_) {
     int i_layer;
     int i_deriv;
     i_layer = *i_layer_;
     i_deriv = *i_deriv_;
     if (xrtm_get_g_l(d, i_layer, i_deriv)) {
          eprintf("ERROR: xrtm_get_g_l()\n");
          return -1;
     }
     return 0;
}


int xrtm_set_coef_1_bindx_f77_(xrtm_data *d, int *i_layer_, int *n_coef_layer_, double *coef) {
     int i_layer;
     int n_coef_layer;
     double **coef2;
     i_layer = *i_layer_;
     n_coef_layer = *n_coef_layer_;
     coef2 = array_from_mem2_d(coef, d->n_elem, n_coef_layer);
     if (xrtm_set_coef_1(d, i_layer, n_coef_layer, coef2)) {
          eprintf("ERROR: xrtm_set_coef_1()\n");
          return -1;
     }
     free_array2_d(coef2);
     return 0;
}


int xrtm_set_coef_n_bindx_f77_(xrtm_data *d, int *n_coef_layer, double *coef) {
     double ***coef2;
     coef2 = array_from_mem3_d(coef, d->n_layers, d->n_elem, d->n_coef);
     if (xrtm_set_coef_n(d, n_coef_layer, coef2)) {
          eprintf("ERROR: xrtm_set_coef_n()\n");
          return -1;
     }
     free_array3_d(coef2);
     return 0;
}


int xrtm_get_n_coef_bindx_f77_(xrtm_data *d, int *i_layer_) {
     int i_layer;
     i_layer = *i_layer_;
     if (xrtm_get_n_coef(d, i_layer)) {
          eprintf("ERROR: xrtm_get_n_coef()\n");
          return -1;
     }
     return 0;
}


double xrtm_get_coef_bindx_f77_(xrtm_data *d, int *i_layer_, int *i_elem_, int *i_coef_) {
     int i_layer;
     int i_elem;
     int i_coef;
     i_layer = *i_layer_;
     i_elem = *i_elem_;
     i_coef = *i_coef_;
     if (xrtm_get_coef(d, i_layer, i_elem, i_coef)) {
          eprintf("ERROR: xrtm_get_coef()\n");
          return -1;
     }
     return 0;
}


int xrtm_set_coef_l_11_bindx_f77_(xrtm_data *d, int *i_layer_, int *i_deriv_, double *coef_l) {
     int i_layer;
     int i_deriv;
     double **coef_l2;
     i_layer = *i_layer_;
     i_deriv = *i_deriv_;
     coef_l2 = array_from_mem2_d(coef_l, d->n_elem, d->n_coef_layer[i_layer]);
     if (xrtm_set_coef_l_11(d, i_layer, i_deriv, coef_l2)) {
          eprintf("ERROR: xrtm_set_coef_l_11()\n");
          return -1;
     }
     free_array2_d(coef_l2);
     return 0;
}


int xrtm_set_coef_l_n1_bindx_f77_(xrtm_data *d, int *i_deriv_, double *coef_l) {
     int i_deriv;
     double ***coef_l2;
     i_deriv = *i_deriv_;
     coef_l2 = array_from_mem3_d(coef_l, d->n_layers, d->n_elem, d->n_coef);
     if (xrtm_set_coef_l_n1(d, i_deriv, coef_l2)) {
          eprintf("ERROR: xrtm_set_coef_l_n1()\n");
          return -1;
     }
     free_array3_d(coef_l2);
     return 0;
}


int xrtm_set_coef_l_1n_bindx_f77_(xrtm_data *d, int *i_layer_, double *coef_l) {
     int i_layer;
     double ***coef_l2;
     i_layer = *i_layer_;
     coef_l2 = array_from_mem3_d(coef_l, d->n_derivs, d->n_elem, d->n_coef_layer[i_layer]);
     if (xrtm_set_coef_l_1n(d, i_layer, coef_l2)) {
          eprintf("ERROR: xrtm_set_coef_l_1n()\n");
          return -1;
     }
     free_array3_d(coef_l2);
     return 0;
}


int xrtm_set_coef_l_nn_bindx_f77_(xrtm_data *d, double *coef_l) {
     double ****coef_l2;
     coef_l2 = array_from_mem4_d(coef_l, d->n_layers, d->n_derivs, d->n_elem, d->n_coef);
     if (xrtm_set_coef_l_nn(d, coef_l2)) {
          eprintf("ERROR: xrtm_set_coef_l_nn()\n");
          return -1;
     }
     free_array4_d(coef_l2);
     return 0;
}


double xrtm_get_coef_l_bindx_f77_(xrtm_data *d, int *i_layer_, int *i_deriv_, int *i_elem_, int *i_coef_) {
     int i_layer;
     int i_deriv;
     int i_elem;
     int i_coef;
     i_layer = *i_layer_;
     i_deriv = *i_deriv_;
     i_elem = *i_elem_;
     i_coef = *i_coef_;
     if (xrtm_get_coef_l(d, i_layer, i_deriv, i_elem, i_coef)) {
          eprintf("ERROR: xrtm_get_coef_l()\n");
          return -1;
     }
     return 0;
}


int xrtm_set_omega_1_bindx_f77_(xrtm_data *d, int *i_layer_, double *omega_) {
     int i_layer;
     double omega;
     i_layer = *i_layer_;
     omega = *omega_;
     if (xrtm_set_omega_1(d, i_layer, omega)) {
          eprintf("ERROR: xrtm_set_omega_1()\n");
          return -1;
     }
     return 0;
}


int xrtm_set_omega_n_bindx_f77_(xrtm_data *d, double *omega) {
     if (xrtm_set_omega_n(d, omega)) {
          eprintf("ERROR: xrtm_set_omega_n()\n");
          return -1;
     }
     return 0;
}


double xrtm_get_omega_bindx_f77_(xrtm_data *d, int *i_layer_) {
     int i_layer;
     i_layer = *i_layer_;
     if (xrtm_get_omega(d, i_layer)) {
          eprintf("ERROR: xrtm_get_omega()\n");
          return -1;
     }
     return 0;
}


int xrtm_set_omega_l_11_bindx_f77_(xrtm_data *d, int *i_layer_, int *i_deriv_, double *omega_l_) {
     int i_layer;
     int i_deriv;
     double omega_l;
     i_layer = *i_layer_;
     i_deriv = *i_deriv_;
     omega_l = *omega_l_;
     if (xrtm_set_omega_l_11(d, i_layer, i_deriv, omega_l)) {
          eprintf("ERROR: xrtm_set_omega_l_11()\n");
          return -1;
     }
     return 0;
}


int xrtm_set_omega_l_n1_bindx_f77_(xrtm_data *d, int *i_deriv_, double *omega_l) {
     int i_deriv;
     i_deriv = *i_deriv_;
     if (xrtm_set_omega_l_n1(d, i_deriv, omega_l)) {
          eprintf("ERROR: xrtm_set_omega_l_n1()\n");
          return -1;
     }
     return 0;
}


int xrtm_set_omega_l_1n_bindx_f77_(xrtm_data *d, int *i_layer_, double *omega_l) {
     int i_layer;
     i_layer = *i_layer_;
     if (xrtm_set_omega_l_1n(d, i_layer, omega_l)) {
          eprintf("ERROR: xrtm_set_omega_l_1n()\n");
          return -1;
     }
     return 0;
}


int xrtm_set_omega_l_nn_bindx_f77_(xrtm_data *d, double *omega_l) {
     double **omega_l2;
     omega_l2 = array_from_mem2_d(omega_l, d->n_layers, d->n_derivs);
     if (xrtm_set_omega_l_nn(d, omega_l2)) {
          eprintf("ERROR: xrtm_set_omega_l_nn()\n");
          return -1;
     }
     free_array2_d(omega_l2);
     return 0;
}


double xrtm_get_omega_l_bindx_f77_(xrtm_data *d, int *i_layer_, int *i_deriv_) {
     int i_layer;
     int i_deriv;
     i_layer = *i_layer_;
     i_deriv = *i_deriv_;
     if (xrtm_get_omega_l(d, i_layer, i_deriv)) {
          eprintf("ERROR: xrtm_get_omega_l()\n");
          return -1;
     }
     return 0;
}


int xrtm_set_ltau_1_bindx_f77_(xrtm_data *d, int *i_layer_, double *ltau_) {
     int i_layer;
     double ltau;
     i_layer = *i_layer_;
     ltau = *ltau_;
     if (xrtm_set_ltau_1(d, i_layer, ltau)) {
          eprintf("ERROR: xrtm_set_ltau_1()\n");
          return -1;
     }
     return 0;
}


int xrtm_set_ltau_n_bindx_f77_(xrtm_data *d, double *ltau) {
     if (xrtm_set_ltau_n(d, ltau)) {
          eprintf("ERROR: xrtm_set_ltau_n()\n");
          return -1;
     }
     return 0;
}


double xrtm_get_ltau_bindx_f77_(xrtm_data *d, int *i_layer_) {
     int i_layer;
     i_layer = *i_layer_;
     if (xrtm_get_ltau(d, i_layer)) {
          eprintf("ERROR: xrtm_get_ltau()\n");
          return -1;
     }
     return 0;
}


int xrtm_set_ltau_l_11_bindx_f77_(xrtm_data *d, int *i_layer_, int *i_deriv_, double *ltau_l_) {
     int i_layer;
     int i_deriv;
     double ltau_l;
     i_layer = *i_layer_;
     i_deriv = *i_deriv_;
     ltau_l = *ltau_l_;
     if (xrtm_set_ltau_l_11(d, i_layer, i_deriv, ltau_l)) {
          eprintf("ERROR: xrtm_set_ltau_l_11()\n");
          return -1;
     }
     return 0;
}


int xrtm_set_ltau_l_n1_bindx_f77_(xrtm_data *d, int *i_deriv_, double *ltau_l) {
     int i_deriv;
     i_deriv = *i_deriv_;
     if (xrtm_set_ltau_l_n1(d, i_deriv, ltau_l)) {
          eprintf("ERROR: xrtm_set_ltau_l_n1()\n");
          return -1;
     }
     return 0;
}


int xrtm_set_ltau_l_1n_bindx_f77_(xrtm_data *d, int *i_layer_, double *ltau_l) {
     int i_layer;
     i_layer = *i_layer_;
     if (xrtm_set_ltau_l_1n(d, i_layer, ltau_l)) {
          eprintf("ERROR: xrtm_set_ltau_l_1n()\n");
          return -1;
     }
     return 0;
}


int xrtm_set_ltau_l_nn_bindx_f77_(xrtm_data *d, double *ltau_l) {
     double **ltau_l2;
     ltau_l2 = array_from_mem2_d(ltau_l, d->n_layers, d->n_derivs);
     if (xrtm_set_ltau_l_nn(d, ltau_l2)) {
          eprintf("ERROR: xrtm_set_ltau_l_nn()\n");
          return -1;
     }
     free_array2_d(ltau_l2);
     return 0;
}


double xrtm_get_ltau_l_bindx_f77_(xrtm_data *d, int *i_layer_, int *i_deriv_) {
     int i_layer;
     int i_deriv;
     i_layer = *i_layer_;
     i_deriv = *i_deriv_;
     if (xrtm_get_ltau_l(d, i_layer, i_deriv)) {
          eprintf("ERROR: xrtm_get_ltau_l()\n");
          return -1;
     }
     return 0;
}


int xrtm_set_surface_b_bindx_f77_(xrtm_data *d, double *surface_b_) {
     double surface_b;
     surface_b = *surface_b_;
     if (xrtm_set_surface_b(d, surface_b)) {
          eprintf("ERROR: xrtm_set_surface_b()\n");
          return -1;
     }
     return 0;
}


double xrtm_get_surface_b_bindx_f77_(xrtm_data *d) {
     if (xrtm_get_surface_b(d)) {
          eprintf("ERROR: xrtm_get_surface_b()\n");
          return -1;
     }
     return 0;
}


int xrtm_set_kernel_ampfac_bindx_f77_(xrtm_data *d, int *i_kernel_, double *ampfac_) {
     int i_kernel;
     double ampfac;
     i_kernel = *i_kernel_;
     ampfac = *ampfac_;
     if (xrtm_set_kernel_ampfac(d, i_kernel, ampfac)) {
          eprintf("ERROR: xrtm_set_kernel_ampfac()\n");
          return -1;
     }
     return 0;
}


double xrtm_get_kernel_ampfac_bindx_f77_(xrtm_data *d, int *i_kernel_) {
     int i_kernel;
     i_kernel = *i_kernel_;
     if (xrtm_get_kernel_ampfac(d, i_kernel)) {
          eprintf("ERROR: xrtm_get_kernel_ampfac()\n");
          return -1;
     }
     return 0;
}


int xrtm_set_kernel_params_1_bindx_f77_(xrtm_data *d, int *i_kernel_, int *i_param_, double *param_) {
     int i_kernel;
     int i_param;
     double param;
     i_kernel = *i_kernel_;
     i_param = *i_param_;
     param = *param_;
     if (xrtm_set_kernel_params_1(d, i_kernel, i_param, param)) {
          eprintf("ERROR: xrtm_set_kernel_params_1()\n");
          return -1;
     }
     return 0;
}


int xrtm_set_kernel_params_n_bindx_f77_(xrtm_data *d, int *i_kernel_, double *params) {
     int i_kernel;
     i_kernel = *i_kernel_;
     if (xrtm_set_kernel_params_n(d, i_kernel, params)) {
          eprintf("ERROR: xrtm_set_kernel_params_n()\n");
          return -1;
     }
     return 0;
}


double xrtm_get_kernel_params_bindx_f77_(xrtm_data *d, int *i_kernel_, int *i_param_) {
     int i_kernel;
     int i_param;
     i_kernel = *i_kernel_;
     i_param = *i_param_;
     if (xrtm_get_kernel_params(d, i_kernel, i_param)) {
          eprintf("ERROR: xrtm_get_kernel_params()\n");
          return -1;
     }
     return 0;
}


int xrtm_set_kernel_ampfac_l_1_bindx_f77_(xrtm_data *d, int *i_kernel_, int *i_deriv_, double *ampfac_l_) {
     int i_kernel;
     int i_deriv;
     double ampfac_l;
     i_kernel = *i_kernel_;
     i_deriv = *i_deriv_;
     ampfac_l = *ampfac_l_;
     if (xrtm_set_kernel_ampfac_l_1(d, i_kernel, i_deriv, ampfac_l)) {
          eprintf("ERROR: xrtm_set_kernel_ampfac_l_1()\n");
          return -1;
     }
     return 0;
}


int xrtm_set_kernel_ampfac_l_n_bindx_f77_(xrtm_data *d, int *i_kernel_, double *ampfac_l) {
     int i_kernel;
     i_kernel = *i_kernel_;
     if (xrtm_set_kernel_ampfac_l_n(d, i_kernel, ampfac_l)) {
          eprintf("ERROR: xrtm_set_kernel_ampfac_l_n()\n");
          return -1;
     }
     return 0;
}


double xrtm_get_kernel_ampfac_l_bindx_f77_(xrtm_data *d, int *i_kernel_, int *i_deriv_) {
     int i_kernel;
     int i_deriv;
     i_kernel = *i_kernel_;
     i_deriv = *i_deriv_;
     if (xrtm_get_kernel_ampfac_l(d, i_kernel, i_deriv)) {
          eprintf("ERROR: xrtm_get_kernel_ampfac_l()\n");
          return -1;
     }
     return 0;
}


int xrtm_set_kernel_params_l_11_bindx_f77_(xrtm_data *d, int *i_kernel_, int *i_deriv_, int *i_param_, double *param_l_) {
     int i_kernel;
     int i_deriv;
     int i_param;
     double param_l;
     i_kernel = *i_kernel_;
     i_deriv = *i_deriv_;
     i_param = *i_param_;
     param_l = *param_l_;
     if (xrtm_set_kernel_params_l_11(d, i_kernel, i_deriv, i_param, param_l)) {
          eprintf("ERROR: xrtm_set_kernel_params_l_11()\n");
          return -1;
     }
     return 0;
}


int xrtm_set_kernel_params_l_1n_bindx_f77_(xrtm_data *d, int *i_kernel_, int *i_deriv_, double *params_l) {
     int i_kernel;
     int i_deriv;
     i_kernel = *i_kernel_;
     i_deriv = *i_deriv_;
     if (xrtm_set_kernel_params_l_1n(d, i_kernel, i_deriv, params_l)) {
          eprintf("ERROR: xrtm_set_kernel_params_l_1n()\n");
          return -1;
     }
     return 0;
}


int xrtm_set_kernel_params_l_n1_bindx_f77_(xrtm_data *d, int *i_kernel_, int *i_param_, double *params_l) {
     int i_kernel;
     int i_param;
     i_kernel = *i_kernel_;
     i_param = *i_param_;
     if (xrtm_set_kernel_params_l_n1(d, i_kernel, i_param, params_l)) {
          eprintf("ERROR: xrtm_set_kernel_params_l_n1()\n");
          return -1;
     }
     return 0;
}


int xrtm_set_kernel_params_l_nn_bindx_f77_(xrtm_data *d, int *i_kernel_, double *params_l) {
     int i_kernel;
     double **params_l2;
     i_kernel = *i_kernel_;
     params_l2 = array_from_mem2_d(params_l, d->n_derivs, kernel_n_params((enum xrtm_kernel_type) d->kernels[i_kernel]));
     if (xrtm_set_kernel_params_l_nn(d, i_kernel, params_l2)) {
          eprintf("ERROR: xrtm_set_kernel_params_l_nn()\n");
          return -1;
     }
     free_array2_d(params_l2);
     return 0;
}


double xrtm_get_kernel_params_l_bindx_f77_(xrtm_data *d, int *i_kernel_, int *i_deriv_, int *i_param_) {
     int i_kernel;
     int i_deriv;
     int i_param;
     i_kernel = *i_kernel_;
     i_deriv = *i_deriv_;
     i_param = *i_param_;
     if (xrtm_get_kernel_params_l(d, i_kernel, i_deriv, i_param)) {
          eprintf("ERROR: xrtm_get_kernel_params_l()\n");
          return -1;
     }
     return 0;
}


int xrtm_update_varied_layers_bindx_f77_(xrtm_data *d) {
     if (xrtm_update_varied_layers(d)) {
          eprintf("ERROR: xrtm_update_varied_layers()\n");
          return -1;
     }
     return 0;
}


int xrtm_solution_bindx_f77_(xrtm_data *d, enum xrtm_solver_mask *solver_, int *solutions_, int *n_phis_, double *phis, double *I_p, double *I_m, double *K_p, double *K_m, double *mean_p, double *mean_m, double *mean_p_l, double *mean_m_l, double *flux_p, double *flux_m, double *flux_p_l, double *flux_m_l, double *flux_div, double *flux_div_l) {
     enum xrtm_solver_mask solver;
     int solutions;
     int n_phis;
     double **phis2;
     double ****I_p2;
     double ****I_m2;
     double *****K_p2;
     double *****K_m2;
     double **mean_p_l2;
     double **mean_m_l2;
     double **flux_p_l2;
     double **flux_m_l2;
     double **flux_div_l2;
     solver = *solver_;
     solutions = *solutions_;
     n_phis = *n_phis_;
     phis2 = array_from_mem2_d(phis, d->n_umus, n_phis);
     I_p2 = array_from_mem4_d(I_p, d->n_ulevels, d->n_umus == 0 ? d->n_quad : d->n_umus, n_phis, d->n_stokes);
     I_m2 = array_from_mem4_d(I_m, d->n_ulevels, d->n_umus == 0 ? d->n_quad : d->n_umus, n_phis, d->n_stokes);
     K_p2 = array_from_mem5_d(K_p, d->n_ulevels, d->n_derivs, d->n_umus == 0 ? d->n_quad : d->n_umus, n_phis, d->n_stokes);
     K_m2 = array_from_mem5_d(K_m, d->n_ulevels, d->n_derivs, d->n_umus == 0 ? d->n_quad : d->n_umus, n_phis, d->n_stokes);
     mean_p_l2 = array_from_mem2_d(mean_p_l, d->n_ulevels, d->n_derivs);
     mean_m_l2 = array_from_mem2_d(mean_m_l, d->n_ulevels, d->n_derivs);
     flux_p_l2 = array_from_mem2_d(flux_p_l, d->n_ulevels, d->n_derivs);
     flux_m_l2 = array_from_mem2_d(flux_m_l, d->n_ulevels, d->n_derivs);
     flux_div_l2 = array_from_mem2_d(flux_div_l, d->n_ulevels, d->n_derivs);
     if (xrtm_solution(d, (enum xrtm_solver_mask) solver, solutions, n_phis, phis2, I_p2, I_m2, K_p2, K_m2, mean_p, mean_m, mean_p_l2, mean_m_l2, flux_p, flux_m, flux_p_l2, flux_m_l2, flux_div, flux_div_l2)) {
          eprintf("ERROR: xrtm_solution()\n");
          return -1;
     }
     free_array2_d(phis2);
     free_array4_d(I_p2);
     free_array4_d(I_m2);
     free_array5_d(K_p2);
     free_array5_d(K_m2);
     free_array2_d(mean_p_l2);
     free_array2_d(mean_m_l2);
     free_array2_d(flux_p_l2);
     free_array2_d(flux_m_l2);
     free_array2_d(flux_div_l2);
     return 0;
}


int xrtm_radiance_bindx_f77_(xrtm_data *d, enum xrtm_solver_mask *solver_, int *n_phis_, double *phis, double *I_p, double *I_m, double *K_p, double *K_m) {
     enum xrtm_solver_mask solver;
     int n_phis;
     double **phis2;
     double ****I_p2;
     double ****I_m2;
     double *****K_p2;
     double *****K_m2;
     solver = *solver_;
     n_phis = *n_phis_;
     phis2 = array_from_mem2_d(phis, d->n_umus, n_phis);
     I_p2 = array_from_mem4_d(I_p, d->n_ulevels, d->n_umus == 0 ? d->n_quad : d->n_umus, n_phis, d->n_stokes);
     I_m2 = array_from_mem4_d(I_m, d->n_ulevels, d->n_umus == 0 ? d->n_quad : d->n_umus, n_phis, d->n_stokes);
     K_p2 = array_from_mem5_d(K_p, d->n_ulevels, d->n_derivs, d->n_umus == 0 ? d->n_quad : d->n_umus, n_phis, d->n_stokes);
     K_m2 = array_from_mem5_d(K_m, d->n_ulevels, d->n_derivs, d->n_umus == 0 ? d->n_quad : d->n_umus, n_phis, d->n_stokes);
     if (xrtm_radiance(d, (enum xrtm_solver_mask) solver, n_phis, phis2, I_p2, I_m2, K_p2, K_m2)) {
          eprintf("ERROR: xrtm_radiance()\n");
          return -1;
     }
     free_array2_d(phis2);
     free_array4_d(I_p2);
     free_array4_d(I_m2);
     free_array5_d(K_p2);
     free_array5_d(K_m2);
     return 0;
}


int xrtm_mean_radiance_bindx_f77_(xrtm_data *d, enum xrtm_solver_mask *solver_, double *mean_p, double *mean_m, double *mean_p_l, double *mean_m_l) {
     enum xrtm_solver_mask solver;
     double **mean_p_l2;
     double **mean_m_l2;
     solver = *solver_;
     mean_p_l2 = array_from_mem2_d(mean_p_l, d->n_ulevels, d->n_derivs);
     mean_m_l2 = array_from_mem2_d(mean_m_l, d->n_ulevels, d->n_derivs);
     if (xrtm_mean_radiance(d, (enum xrtm_solver_mask) solver, mean_p, mean_m, mean_p_l2, mean_m_l2)) {
          eprintf("ERROR: xrtm_mean_radiance()\n");
          return -1;
     }
     free_array2_d(mean_p_l2);
     free_array2_d(mean_m_l2);
     return 0;
}


int xrtm_flux_bindx_f77_(xrtm_data *d, enum xrtm_solver_mask *solver_, double *flux_p, double *flux_m, double *flux_p_l, double *flux_m_l) {
     enum xrtm_solver_mask solver;
     double **flux_p_l2;
     double **flux_m_l2;
     solver = *solver_;
     flux_p_l2 = array_from_mem2_d(flux_p_l, d->n_ulevels, d->n_derivs);
     flux_m_l2 = array_from_mem2_d(flux_m_l, d->n_ulevels, d->n_derivs);
     if (xrtm_flux(d, (enum xrtm_solver_mask) solver, flux_p, flux_m, flux_p_l2, flux_m_l2)) {
          eprintf("ERROR: xrtm_flux()\n");
          return -1;
     }
     free_array2_d(flux_p_l2);
     free_array2_d(flux_m_l2);
     return 0;
}


int xrtm_flux_divergence_bindx_f77_(xrtm_data *d, enum xrtm_solver_mask *solver_, double *flux_div, double *flux_div_l) {
     enum xrtm_solver_mask solver;
     double **flux_div_l2;
     solver = *solver_;
     flux_div_l2 = array_from_mem2_d(flux_div_l, d->n_ulevels, d->n_derivs);
     if (xrtm_flux_divergence(d, (enum xrtm_solver_mask) solver, flux_div, flux_div_l2)) {
          eprintf("ERROR: xrtm_flux_divergence()\n");
          return -1;
     }
     free_array2_d(flux_div_l2);
     return 0;
}


#ifdef __cplusplus
}
#endif