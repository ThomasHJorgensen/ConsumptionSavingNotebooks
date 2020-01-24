typedef struct par_struct
{
 bool do_2d;
 int T;
 int t;
 double beta;
 double rho;
 double alpha;
 double d_ubar;
 double d1_ubar;
 double d2_ubar;
 double R;
 double tau;
 double tau1;
 double tau2;
 double delta;
 double delta1;
 double delta2;
 double gamma;
 double sigma_psi;
 int Npsi;
 double sigma_xi;
 int Nxi;
 double pi;
 double mu;
 int Nm;
 double *grid_m;
 double m_max;
 int Np;
 double *grid_p;
 double p_min;
 double p_max;
 int Nn;
 double *grid_n;
 double n_max;
 int Nx;
 double *grid_x;
 double x_max;
 int Na;
 double *grid_a;
 double a_max;
 int Nshocks;
 double *psi;
 double *psi_w;
 double *xi;
 double *xi_w;
 double sigma_p0;
 double mu_d0;
 double sigma_d0;
 double mu_a0;
 double sigma_a0;
 int simT;
 int simN;
 int sim_seed;
 double euler_cutoff;
 double tol;
 bool do_print;
 bool do_print_period;
 int cppthreads;
 bool do_marg_u;
 bool do_simple_wq;
 bool use_gs_in_vfi;
 double *time_w;
 double *time_keep;
 double *time_adj;
 double *time_adj_full;
 double *time_adj_d1;
 double *time_adj_d2;
} par_struct;

