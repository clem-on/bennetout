cmd_net/netfilter/nf_conntrack_ftp.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o net/netfilter/nf_conntrack_ftp.ko net/netfilter/nf_conntrack_ftp.o net/netfilter/nf_conntrack_ftp.mod.o