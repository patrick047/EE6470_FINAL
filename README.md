# EE6470 FINAL PROJECT
### README
### OPERATION
#### PART 1(HLS)
#### : cd /home/m109/m109061616/EE6470/midproject/withoutpipeline/stratus
#### : make sim_B
#### : make sim_BASIC
#### : make sim_DPA
#### PART 2(RISCV-VP PLARFORM)
#### (SINGLE CORE)
#### (build the platform)
#### : cd riscv-vp/vp/build
#### : cmake ..
#### : make install
#### (run the simulation)
#### : cd riscv-vp/sw/basic-hw6
#### : make
#### : make sim
#### (TWO CORES)
#### (build the platform)
#### : cd riscv-vp/vp/build
#### : cmake ..
#### : make install
#### (run the simulation)
#### : cd riscv-vp/sw/tiny32-hw7
#### : make
#### : make sim
#### PART 3(ESP PLATFORM)
#### : cd ESP
#### : source setup.sh
#### : cd esp/socs/xilinx-vcu128-
#### : make grlib-xconfig
#### : make esp-xconfig
#### : make l2-hls
#### : make llc-hls
#### : make sim
#### (build the accelerator)
#### : cd esp
#### : ./tools/accgen/accgen.sh
#### : cd esp/socs/xilinx-vcu128-
#### : make gau_stratus-exe
#### : make gau_stratus-hls
#### : make gau_stratus-sim
#### : make esp-xconfig
#### : make gau_stratus-baremetal
#### : TEST_PROGRAM=./soft-build/<cpu>/baremetal/gau_stratus.exe make sim[-gui]
#### : TEST_PROGRAM=./soft-build/<cpu>/baremetal/gau_stratus.exe make ncsim[-gui]


