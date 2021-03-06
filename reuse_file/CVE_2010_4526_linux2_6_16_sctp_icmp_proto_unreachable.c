void CVE_2010_4526_linux2_6_16_sctp_icmp_proto_unreachable(struct sock *sk,
                           struct sctp_association *asoc,
                           struct sctp_transport *t)
{
	SCTP_DEBUG_PRINTK("%s\n",  __FUNCTION__);

	sctp_do_sm(SCTP_EVENT_T_OTHER,
		   SCTP_ST_OTHER(SCTP_EVENT_ICMP_PROTO_UNREACH),
		   asoc->state, asoc->ep, asoc, t,
		   GFP_ATOMIC);

}