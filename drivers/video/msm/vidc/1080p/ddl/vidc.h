/* Copyright (c) 2010, Code Aurora Forum. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 *       copyright notice, this list of conditions and the following
 *       disclaimer in the documentation and/or other materials provided
 *       with the distribution.
 *     * Neither the name of Code Aurora Forum, Inc. nor the names of its
 *       contributors may be used to endorse or promote products derived
 *       from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
 * IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef _VIDC_H_
#define _VIDC_H_

#include "vidc_hwio_reg.h"

#define VIDC_1080P_RISC2HOST_CMD_EMPTY               0
#define VIDC_1080P_RISC2HOST_CMD_OPEN_CH_RET         1
#define VIDC_1080P_RISC2HOST_CMD_CLOSE_CH_RET        2
#define VIDC_1080P_RISC2HOST_CMD_SEQ_DONE_RET        4
#define VIDC_1080P_RISC2HOST_CMD_FRAME_DONE_RET      5
#define VIDC_1080P_RISC2HOST_CMD_ENC_COMPLETE_RET    7
#define VIDC_1080P_RISC2HOST_CMD_SYS_INIT_RET        8
#define VIDC_1080P_RISC2HOST_CMD_FW_STATUS_RET       9
#define VIDC_1080P_RISC2HOST_CMD_FLUSH_COMMAND_RET  12
#define VIDC_1080P_RISC2HOST_CMD_ABORT_RET          13
#define VIDC_1080P_RISC2HOST_CMD_INIT_BUFFERS_RET   15
#define VIDC_1080P_RISC2HOST_CMD_EDFU_INT_RET       16
#define VIDC_1080P_RISC2HOST_CMD_ERROR_RET          32

#define VIDC_1080P_ERROR_INVALID_CHANNEL_NUMBER                  1
#define VIDC_1080P_ERROR_INVALID_COMMAND_ID                      2
#define VIDC_1080P_ERROR_CHANNEL_ALREADY_IN_USE                  3
#define VIDC_1080P_ERROR_CHANNEL_NOT_OPEN_BEFORE_CHANNEL_CLOSE   4
#define VIDC_1080P_ERROR_OPEN_CH_ERROR_SEQ_START                 5
#define VIDC_1080P_ERROR_SEQ_START_ALREADY_CALLED                6
#define VIDC_1080P_ERROR_OPEN_CH_ERROR_INIT_BUFFERS              7
#define VIDC_1080P_ERROR_SEQ_START_ERROR_INIT_BUFFERS            8
#define VIDC_1080P_ERROR_INIT_BUFFER_ALREADY_CALLED              9
#define VIDC_1080P_ERROR_OPEN_CH_ERROR_FRAME_START              10
#define VIDC_1080P_ERROR_SEQ_START_ERROR_FRAME_START            11
#define VIDC_1080P_ERROR_INIT_BUFFERS_ERROR_FRAME_START         12
#define VIDC_1080P_ERROR_CODEC_LIMIT_EXCEEDED                   13
#define VIDC_1080P_ERROR_MEM_ALLOCATION_FAILED                  20
#define VIDC_1080P_ERROR_INSUFFICIENT_CONTEXT_SIZE              25

#define VIDC_1080P_ERROR_UNSUPPORTED_FEATURE_IN_PROFILE   27
#define VIDC_1080P_ERROR_RESOLUTION_NOT_SUPPORTED         28
#define VIDC_1080P_ERROR_HEADER_NOT_FOUND                 52
#define VIDC_1080P_ERROR_FRAME_RATE_NOT_SUPPORTED         62
#define VIDC_1080P_ERROR_INVALID_QP_VALUE                 63
#define VIDC_1080P_ERROR_INVALID_RC_REACTION_COEFFICIENT  64
#define VIDC_1080P_ERROR_INVALID_CPB_SIZE_AT_GIVEN_LEVEL  65
#define VIDC_1080P_ERROR_ALLOC_DPB_SIZE_NOT_SUFFICIENT    71
#define VIDC_1080P_ERROR_NUM_DPB_OUT_OF_RANGE             74
#define VIDC_1080P_ERROR_NULL_METADATA_INPUT_POINTER      77
#define VIDC_1080P_ERROR_NULL_DPB_POINTER                 78
#define VIDC_1080P_ERROR_NULL_OTH_EXT_BUFADDR             79
#define VIDC_1080P_ERROR_NULL_MV_POINTER                  80
#define VIDC_1080P_ERROR_DIVIDE_BY_ZERO                   81
#define VIDC_1080P_ERROR_BIT_STREAM_BUF_EXHAUST           82
#define VIDC_1080P_ERROR_DESCRIPTOR_BUFFER_EMPTY          83
#define VIDC_1080P_ERROR_DMA_TX_NOT_COMPLETE              84

#define VIDC_1080P_ERROR_MB_HEADER_NOT_DONE       85
#define VIDC_1080P_ERROR_MB_COEFF_NOT_DONE        86
#define VIDC_1080P_ERROR_CODEC_SLICE_NOT_DONE     87
#define VIDC_1080P_ERROR_VIDC_CORE_TIME_OUT       88
#define VIDC_1080P_ERROR_VC1_BITPLANE_DECODE_ERR  89
#define VIDC_1080P_ERROR_VSP_NOT_READY            90
#define VIDC_1080P_ERROR_BUFFER_FULL_STATE        91

#define VIDC_1080P_ERROR_SYNC_POINT_NOT_RECEIVED  111
#define VIDC_1080P_ERROR_RESOLUTION_MISMATCH      112
#define VIDC_1080P_ERROR_NV_QUANT_ERR             113
#define VIDC_1080P_ERROR_SYNC_MARKER_ERR          114
#define VIDC_1080P_ERROR_FEATURE_NOT_SUPPORTED    115
#define VIDC_1080P_ERROR_MEM_CORRUPTION           116
#define VIDC_1080P_ERROR_INVALID_REFERENCE_FRAME  117
#define VIDC_1080P_ERROR_PICTURE_CODING_TYPE_ERR  118
#define VIDC_1080P_ERROR_MV_RANGE_ERR             119
#define VIDC_1080P_ERROR_PICTURE_STRUCTURE_ERR    120
#define VIDC_1080P_ERROR_SLICE_ADDR_INVALID       121
#define VIDC_1080P_ERROR_NON_PAIRED_FIELD_NOT_SUPPORTED         122
#define VIDC_1080P_ERROR_NON_FRAME_DATA_RECEIVED                123
#define VIDC_1080P_ERROR_INCOMPLETE_FRAME                       124
#define VIDC_1080P_ERROR_NO_BUFFER_RELEASED_FROM_HOST           125
#define VIDC_1080P_ERROR_NULL_FW_DEBUG_INFO_POINTER             126
#define VIDC_1080P_ERROR_ALLOC_DEBUG_INFO_SIZE_INSUFFICIENT     127
#define VIDC_1080P_ERROR_NALU_HEADER_ERROR       128
#define VIDC_1080P_ERROR_SPS_PARSE_ERROR         129
#define VIDC_1080P_ERROR_PPS_PARSE_ERROR         130
#define VIDC_1080P_ERROR_SLICE_PARSE_ERROR       131

#define VIDC_1080P_WARN_COMMAND_FLUSHED                  145

#define VIDC_1080P_WARN_METADATA_NO_SPACE_NUM_CONCEAL_MB 150
#define VIDC_1080P_WARN_METADATA_NO_SPACE_QP             151
#define VIDC_1080P_WARN_METADATA_NO_SPACE_CONCEAL_MB     152
#define VIDC_1080P_WARN_METADATA_NO_SPACE_VC1_PARAM      153
#define VIDC_1080P_WARN_METADATA_NO_SPACE_SEI            154
#define VIDC_1080P_WARN_METADATA_NO_SPACE_VUI            155
#define VIDC_1080P_WARN_METADATA_NO_SPACE_EXTRA          156
#define VIDC_1080P_WARN_METADATA_NO_SPACE_DATA_NONE      157
#define VIDC_1080P_WARN_FRAME_RATE_UNKNOWN               158
#define VIDC_1080P_WARN_ASPECT_RATIO_UNKNOWN             159
#define VIDC_1080P_WARN_COLOR_PRIMARIES_UNKNOWN          160
#define VIDC_1080P_WARN_TRANSFER_CHAR_UNKNOWN            161
#define VIDC_1080P_WARN_MATRIX_COEFF_UNKNOWN             162
#define VIDC_1080P_WARN_NON_SEQ_SLICE_ADDR               163
#define VIDC_1080P_WARN_BROKEN_LINK                      164
#define VIDC_1080P_WARN_FRAME_CONCEALED                  165
#define VIDC_1080P_WARN_PROFILE_UNKNOWN                  166
#define VIDC_1080P_WARN_LEVEL_UNKNOWN                    167
#define VIDC_1080P_WARN_BIT_RATE_NOT_SUPPORTED           168
#define VIDC_1080P_WARN_COLOR_DIFF_FORMAT_NOT_SUPPORTED  169
#define VIDC_1080P_WARN_NULL_EXTRA_METADATA_POINTER      170

#define VIDC_1080P_WARN_METADATA_NO_SPACE_MB_INFO        180
#define VIDC_1080P_WARN_METADATA_NO_SPACE_SLICE_SIZE     181
#define VIDC_1080P_WARN_RESOLUTION_WARNING               182

#define VIDC_1080P_H264_ENC_TYPE_P       0
#define VIDC_1080P_H264_ENC_TYPE_B       1
#define VIDC_1080P_H264_ENC_TYPE_IDR     2
#define VIDC_1080P_MP4_H263_ENC_TYPE_I   0
#define VIDC_1080P_MP4_H263_ENC_TYPE_P   1
#define VIDC_1080P_MP4_H263_ENC_TYPE_B   2

#define VIDC_1080P_MPEG4_LEVEL0    0
#define VIDC_1080P_MPEG4_LEVEL0b   9
#define VIDC_1080P_MPEG4_LEVEL1    1
#define VIDC_1080P_MPEG4_LEVEL2    2
#define VIDC_1080P_MPEG4_LEVEL3    3
#define VIDC_1080P_MPEG4_LEVEL3b   7
#define VIDC_1080P_MPEG4_LEVEL4    4
#define VIDC_1080P_MPEG4_LEVEL4a   4
#define VIDC_1080P_MPEG4_LEVEL5    5
#define VIDC_1080P_MPEG4_LEVEL6    6
#define VIDC_1080P_MPEG4_LEVEL7    7

#define VIDC_1080P_H264_LEVEL1     10
#define VIDC_1080P_H264_LEVEL1b    9
#define VIDC_1080P_H264_LEVEL1p1   11
#define VIDC_1080P_H264_LEVEL1p2   12
#define VIDC_1080P_H264_LEVEL1p3   13
#define VIDC_1080P_H264_LEVEL2     20
#define VIDC_1080P_H264_LEVEL2p1   21
#define VIDC_1080P_H264_LEVEL2p2   22
#define VIDC_1080P_H264_LEVEL3     30
#define VIDC_1080P_H264_LEVEL3p1   31
#define VIDC_1080P_H264_LEVEL3p2   32
#define VIDC_1080P_H264_LEVEL4     40

#define VIDC_1080P_H263_LEVEL10    10
#define VIDC_1080P_H263_LEVEL20    20
#define VIDC_1080P_H263_LEVEL30    30
#define VIDC_1080P_H263_LEVEL40    40
#define VIDC_1080P_H263_LEVEL45    45
#define VIDC_1080P_H263_LEVEL50    50
#define VIDC_1080P_H263_LEVEL60    60
#define VIDC_1080P_H263_LEVEL70    70

#define VIDC_1080P_BUS_ERROR_HANDLER                   0x01
#define VIDC_1080P_ILLEVIDC_INSTRUCTION_HANDLER         0x02
#define VIDC_1080P_TICK_HANDLER                        0x04
#define VIDC_1080P_TRAP_HANDLER                        0x10
#define VIDC_1080P_ALIGN_HANDLER                       0x20
#define VIDC_1080P_RANGE_HANDLER                       0x40
#define VIDC_1080P_DTLB_MISS_EXCEPTION_HANDLER         0x80
#define VIDC_1080P_ITLB_MISS_EXCEPTION_HANDLER        0x100
#define VIDC_1080P_DATA_PAGE_FAULT_EXCEPTION_HANDLER  0x200
#define VIDC_1080P_INST_PAGE_FAULT_EXCEPTION_HANDLER  0x400

enum vidc_1080p_reset_type{
	VIDC_1080P_RESET_IN_SEQ_FIRST_STAGE   = 0x0,
	VIDC_1080P_RESET_IN_SEQ_SECOND_STAGE  = 0x1,
};
enum vidc_1080p_memory_access_method_type{
	VIDC_1080P_TILE_LINEAR = 0,
	VIDC_1080P_TILE_16x16  = 2,
	VIDC_1080P_TILE_64x32  = 3,
	VIDC_1080P_TILE_32BIT  = 0x7FFFFFFF
};
enum vidc_1080p_host2risc_cmd_type{
	VIDC_1080P_HOST2RISC_CMD_EMPTY          = 0,
	VIDC_1080P_HOST2RISC_CMD_OPEN_CH        = 1,
	VIDC_1080P_HOST2RISC_CMD_CLOSE_CH       = 2,
	VIDC_1080P_HOST2RISC_CMD_SYS_INIT       = 3,
	VIDC_1080P_HOST2RISC_CMD_FLUSH_COMMMAND = 4,
	VIDC_1080P_HOST2RISC_CMD_CONTINUE_ENC   = 7,
	VIDC_1080P_HOST2RISC_CMD_ABORT_ENC      = 8,
	VIDC_1080P_HOST2RISC_CMD_32BIT          = 0x7FFFFFFF
};
enum vidc_1080p_decode_p_cache_enable_type{
	VIDC_1080P_DECODE_PCACHE_ENABLE_P   = 0,
	VIDC_1080P_DECODE_PCACHE_ENABLE_B   = 1,
	VIDC_1080P_DECODE_PCACHE_ENABLE_PB  = 2,
	VIDC_1080P_DECODE_PCACHE_DISABLE    = 3,
	VIDC_1080P_DECODE_PCACHE_32BIT      = 0x7FFFFFFF
};
enum vidc_1080p_encode_p_cache_enable_type{
	VIDC_1080P_ENCODE_PCACHE_ENABLE  = 0,
	VIDC_1080P_ENCODE_PCACHE_DISABLE = 3,
	VIDC_1080P_ENCODE_PCACHE_32BIT   = 0x7FFFFFFF
};
enum vidc_1080p_codec_type{
	VIDC_1080P_H264_DECODE     = 0,
	VIDC_1080P_VC1_DECODE      = 1,
	VIDC_1080P_MPEG4_DECODE    = 2,
	VIDC_1080P_MPEG2_DECODE    = 3,
	VIDC_1080P_H263_DECODE     = 4,
	VIDC_1080P_VC1_RCV_DECODE  = 5,
	VIDC_1080P_DIVX311_DECODE  = 6,
	VIDC_1080P_DIVX412_DECODE  = 7,
	VIDC_1080P_DIVX502_DECODE  = 8,
	VIDC_1080P_DIVX503_DECODE  = 9,
	VIDC_1080P_H264_ENCODE    = 16,
	VIDC_1080P_MPEG4_ENCODE   = 17,
	VIDC_1080P_H263_ENCODE    = 18,
	VIDC_1080P_CODEC_32BIT    = 0x7FFFFFFF
};
enum vidc_1080p_entropy_sel_type{
	VIDC_1080P_ENTROPY_SEL_CAVLC = 0,
	VIDC_1080P_ENTROPY_SEL_CABAC = 1,
	VIDC_1080P_ENTROPY_32BIT     = 0x7FFFFFFF
};
enum vidc_1080p_DBConfig_type{
	VIDC_1080P_DB_ALL_BLOCKING_BOUNDARY  = 0,
	VIDC_1080P_DB_DISABLE                = 1,
	VIDC_1080P_DB_SKIP_SLICE_BOUNDARY    = 2,
	VIDC_1080P_DB_32BIT                  = 0x7FFFFFFF
};
enum vidc_1080p_MSlice_selection_type{
	VIDC_1080P_MSLICE_DISABLE        = 0,
	VIDC_1080P_MSLICE_BY_MB_COUNT    = 1,
	VIDC_1080P_MSLICE_BY_BYTE_COUNT  = 3,
	VIDC_1080P_MSLICE_32BIT          = 0x7FFFFFFF
};
enum vidc_1080p_display_status_type{
	VIDC_1080P_DISPLAY_STATUS_DECODE_ONLY        = 0,
	VIDC_1080P_DISPLAY_STATUS_DECODE_AND_DISPLAY = 1,
	VIDC_1080P_DISPLAY_STATUS_DISPLAY_ONLY       = 2,
	VIDC_1080P_DISPLAY_STATUS_DPB_EMPTY          = 3,
	VIDC_1080P_DISPLAY_STATUS_NOOP               = 4,
	VIDC_1080P_DISPLAY_STATUS_32BIT              = 0x7FFFFFFF
};
enum vidc_1080p_display_coding_type{
	VIDC_1080P_DISPLAY_CODING_PROGRESSIVE_SCAN = 0,
	VIDC_1080P_DISPLAY_CODING_INTERLACED       = 1,
	VIDC_1080P_DISPLAY_CODING_32BIT            = 0x7FFFFFFF
};
enum vidc_1080p_decode_frame_type{
	VIDC_1080P_DECODE_FRAMETYPE_NOT_CODED  = 0,
	VIDC_1080P_DECODE_FRAMETYPE_I          = 1,
	VIDC_1080P_DECODE_FRAMETYPE_P          = 2,
	VIDC_1080P_DECODE_FRAMETYPE_B          = 3,
	VIDC_1080P_DECODE_FRAMETYPE_OTHERS     = 4,
	VIDC_1080P_DECODE_FRAMETYPE_32BIT      = 0x7FFFFFFF
};
enum vidc_1080p_encode_frame_type{
	VIDC_1080P_ENCODE_FRAMETYPE_NOT_CODED  = 0,
	VIDC_1080P_ENCODE_FRAMETYPE_I          = 1,
	VIDC_1080P_ENCODE_FRAMETYPE_P          = 2,
	VIDC_1080P_ENCODE_FRAMETYPE_B          = 3,
	VIDC_1080P_ENCODE_FRAMETYPE_SKIPPED    = 4,
	VIDC_1080P_ENCODE_FRAMETYPE_OTHERS     = 5,
	VIDC_1080P_ENCODE_FRAMETYPE_32BIT      = 0x7FFFFFFF

};

#define VIDC_1080P_PROFILE_MPEG4_SIMPLE      0x00000000
#define VIDC_1080P_PROFILE_MPEG4_ADV_SIMPLE  0x00000001

#define VIDC_1080P_PROFILE_H264_MAIN         0x00000000
#define VIDC_1080P_PROFILE_H264_HIGH         0x00000001
#define VIDC_1080P_PROFILE_H264_BASELINE     0x00000002


enum vidc_1080p_decode_type{
	VIDC_1080P_DEC_TYPE_SEQ_HEADER       = 0x00010000,
	VIDC_1080P_DEC_TYPE_FRAME_DATA       = 0x00020000,
	VIDC_1080P_DEC_TYPE_LAST_FRAME_DATA  = 0x00030000,
	VIDC_1080P_DEC_TYPE_32BIT            = 0x7FFFFFFF
};
enum vidc_1080p_encode_type{
	VIDC_1080P_ENC_TYPE_SEQ_HEADER       = 0x00010000,
	VIDC_1080P_ENC_TYPE_FRAME_DATA       = 0x00020000,
	VIDC_1080P_ENC_TYPE_LAST_FRAME_DATA  = 0x00030000,
	VIDC_1080P_ENC_TYPE_32BIT            = 0x7FFFFFFF
};
struct vidc_1080p_dec_seq_start_param_type{
	u32 n_cmd_seq_num;
	u32 n_inst_id;
	u32 n_shared_mem_addr_offset;
	u32 n_stream_buffer_addr_offset;
	u32 n_stream_buffersize;
	u32 n_stream_frame_size;
	u32 n_descriptor_buffer_addr_offset;
	u32 n_descriptor_buffer_size;
};
struct vidc_1080p_dec_frame_start_param_type{
	u32 n_cmd_seq_num;
	u32 n_inst_id;
	u32 n_shared_mem_addr_offset;
	u32 n_stream_buffer_addr_offset;
	u32 n_stream_buffersize;
	u32 n_stream_frame_size;
	u32 n_descriptor_buffer_addr_offset;
	u32 n_descriptor_buffer_size;
	u32 n_release_dpb_bit_mask;
	u32 n_dpb_count;
	u32 b_dpb_flush;
	enum vidc_1080p_decode_type e_decode_type;
};
struct vidc_1080p_dec_init_buffers_param_type{
	u32 n_cmd_seq_num;
	u32 n_inst_id;
	u32 n_shared_mem_addr_offset;
	u32 n_dpb_count;
};
struct vidc_1080p_seq_hdr_info_type{
	u32 n_img_size_x;
	u32 n_img_size_y;
	u32 n_dec_frm_size;
	u32 n_min_num_dpb;
	u32 n_min_luma_dpb_size;
	u32 n_min_chroma_dpb_size;
	u32 n_profile;
	u32 n_level;
	u32 n_progressive;
	u32 n_crop_exists;
	u32 n_crop_right_offset;
	u32 n_crop_left_offset;
	u32 n_crop_bottom_offset;
	u32 n_crop_top_offset;
};
struct vidc_1080p_enc_seq_start_param_type{
	u32 n_cmd_seq_num;
	u32 n_inst_id;
	u32 n_shared_mem_addr_offset;
	u32 n_stream_buffer_addr_offset;
	u32 n_stream_buffer_size;
};
struct vidc_1080p_enc_frame_start_param_type{
	u32 n_cmd_seq_num;
	u32 n_inst_id;
	u32 n_shared_mem_addr_offset;
	u32 n_current_y_addr_offset;
	u32 n_current_c_addr_offset;
	u32 n_stream_buffer_addr_offset;
	u32 n_stream_buffer_size;
	u32 b_intra_frame;
	u32 b_input_flush;
	enum vidc_1080p_encode_type e_encode_type;
};
struct vidc_1080p_enc_frame_info_type{
	u32 n_enc_frame_size;
	u32 n_enc_picture_count;
	u32 n_enc_write_pointer;
	u32 n_enc_luma_address;
	u32 n_enc_chroma_address;
	enum vidc_1080p_encode_frame_type e_enc_frame_type;
};
struct vidc_1080p_dec_disp_info_type{
	u32 n_resl_change;
	u32 n_reconfig_flush_done;
	u32 n_img_size_x;
	u32 n_img_size_y;
	u32 n_display_y_addr;
	u32 n_display_c_addr;
	u32 n_decode_y_addr;
	u32 n_decode_c_addr;
	u32 n_tag_top;
	u32 n_pic_time_top;
	u32 n_tag_bottom;
	u32 n_pic_time_bottom;
	u32 n_metadata_exists;
	u32 n_crop_exists;
	u32 n_crop_right_offset;
	u32 n_crop_left_offset;
	u32 n_crop_bottom_offset;
	u32 n_crop_top_offset;
	u32 n_input_bytes_consumed;
	u32 n_input_is_interlace;
	u32 n_input_frame_num;
	enum vidc_1080p_display_status_type e_display_status;
	enum vidc_1080p_display_status_type e_decode_status;
	enum vidc_1080p_display_coding_type e_display_coding;
	enum vidc_1080p_display_coding_type e_decode_coding;
	enum vidc_1080p_decode_frame_type e_input_frame_type;
};
void vidc_1080p_do_sw_reset(enum vidc_1080p_reset_type n_init_flag);
void vidc_1080p_release_sw_reset(void);
void vidc_1080p_clear_interrupt(void);
void vidc_1080p_set_host2risc_cmd(
	enum vidc_1080p_host2risc_cmd_type e_host2risc_command,
	u32 n_host2risc_arg1, u32 n_host2risc_arg2,
	u32 n_host2risc_arg3, u32 n_host2risc_arg4);
void vidc_1080p_get_risc2host_cmd(u32 *pn_risc2host_command,
	u32 *pn_risc2host_arg1, u32 *pn_risc2host_arg2,
	u32 *pn_risc2host_arg3, u32 *pn_risc2host_arg4);
void vidc_1080p_clear_risc2host_cmd(void);
void vidc_1080p_get_fw_version(u32 *pn_fw_version);
void vidc_1080p_get_fw_status(u32 *pn_fw_status);
void vidc_1080p_init_memory_controller(u32 n_dram_base_addr_a,
	u32 n_dram_base_addr_b);
void vidc_1080p_get_memory_controller_status(u32 *pb_mc_abusy,
	u32 *pb_mc_bbusy);
void vidc_1080p_set_h264_decode_buffers(u32 n_dpb, u32 n_dec_vert_nb_mv_offset,
	u32 n_dec_nb_ip_offset, u32 *pn_dpb_luma_offset,
	u32 *pn_dpb_chroma_offset, u32 *pn_mv_buffer_offset);
void vidc_1080p_set_decode_recon_buffers(u32 n_recon_buffer, u32 *pn_dec_luma,
	u32 *pn_dec_chroma);
void vidc_1080p_set_mpeg4_divx_decode_work_buffers(u32 n_nb_dcac_buffer_offset,
	u32 n_upnb_mv_buffer_offset, u32 n_sub_anchor_buffer_offset,
	u32 n_overlay_transform_buffer_offset, u32 n_stx_parser_buffer_offset);
void vidc_1080p_set_h263_decode_work_buffers(u32 n_nb_dcac_buffer_offset,
	u32 n_upnb_mv_buffer_offset, u32 n_sub_anchor_buffer_offset,
	u32 n_overlay_transform_buffer_offset);
void vidc_1080p_set_vc1_decode_work_buffers(u32 n_nb_dcac_buffer_offset,
	u32 n_upnb_mv_buffer_offset, u32 n_sub_anchor_buffer_offset,
	u32 n_overlay_transform_buffer_offset, u32 n_bitplain1Buffer_offset,
	u32 n_bitplain2Buffer_offset, u32 n_bitplain3Buffer_offset);
void vidc_1080p_set_encode_recon_buffers(u32 n_recon_buffer, u32 *pn_enc_luma,
	u32 *pn_enc_chroma);
void vidc_1080p_set_h264_encode_work_buffers(u32 n_up_row_mv_buffer_offset,
	u32 n_direct_colzero_flag_buffer_offset,
	u32 n_upper_intra_md_buffer_offset,
	u32 n_upper_intra_pred_buffer_offset, u32 n_nbor_infor_buffer_offset,
	u32 n_mb_info_offset);
void vidc_1080p_set_h263_encode_work_buffers(u32 n_up_row_mv_buffer_offset,
	u32 n_up_row_inv_quanti_coeff_buffer_offset);
void vidc_1080p_set_mpeg4_encode_work_buffers(u32 n_skip_flag_buffer_offset,
	u32 n_up_row_inv_quanti_coeff_buffer_offset, u32 n_upper_mv_offset);
void vidc_1080p_set_encode_frame_size(u32 n_hori_size, u32 n_vert_size);
void vidc_1080p_set_encode_profile_level(u32 n_encode_profile, u32 n_enc_level);
void vidc_1080p_set_encode_field_picture_structure(u32 b_enc_field_picture);
void vidc_1080p_set_encode_deblock_filter(u32 b_lf_enables);
void vidc_1080p_set_decode_qp_save_control(u32 b_enable_q_pout);
void vidc_1080p_get_returned_channel_inst_id(u32 *pn_rtn_chid);
void vidc_1080p_clear_returned_channel_inst_id(void);
void vidc_1080p_get_decode_seq_start_result(
	struct vidc_1080p_seq_hdr_info_type *p_seq_hdr_info);
void vidc_1080p_get_decoded_frame_size(u32 *pn_decoded_size);
void vidc_1080p_get_display_frame_result(
	struct vidc_1080p_dec_disp_info_type *p_dec_disp_info);
void vidc_1080p_get_decode_frame_type(
	enum vidc_1080p_decode_frame_type *pe_frame_type);
void vidc_1080p_get_decode_frame_result(
	struct vidc_1080p_dec_disp_info_type *p_dec_disp_info);
void vidc_1080p_decode_seq_start_ch0(
	struct vidc_1080p_dec_seq_start_param_type *p_param);
void vidc_1080p_decode_seq_start_ch1(
	struct vidc_1080p_dec_seq_start_param_type *p_param);
void vidc_1080p_decode_init_buffers_ch0
	(struct vidc_1080p_dec_init_buffers_param_type *p_param);
void vidc_1080p_decode_init_buffers_ch1(
	struct vidc_1080p_dec_init_buffers_param_type *p_param);
void vidc_1080p_decode_frame_start_ch0(
	struct vidc_1080p_dec_frame_start_param_type *p_param);
void vidc_1080p_decode_frame_start_ch1(
	struct vidc_1080p_dec_frame_start_param_type *p_param);
void vidc_1080p_set_divx3_resolution_ch0(u32 n_width, u32 n_height);
void vidc_1080p_set_divx3_resolution_ch1(u32 n_width, u32 n_height);
void vidc_1080p_get_encode_frame_info(
	struct vidc_1080p_enc_frame_info_type *p_frame_info);
void vidc_1080p_encode_seq_start_ch0(
	struct vidc_1080p_enc_seq_start_param_type *p_param);
void vidc_1080p_encode_seq_start_ch1(
	struct vidc_1080p_enc_seq_start_param_type *p_param);
void vidc_1080p_encode_frame_start_ch0(
	struct vidc_1080p_enc_frame_start_param_type *p_param);
void vidc_1080p_encode_frame_start_ch1(
	struct vidc_1080p_enc_frame_start_param_type *p_param);
void vidc_1080p_set_encode_picture_type(u32 n_ifrm_ctrl, u32 n_number_b);
void vidc_1080p_set_encode_multi_slice_control(
	enum vidc_1080p_MSlice_selection_type e_multiple_slice_selection,
	u32 n_mslice_mb, u32 n_mslice_byte);
void vidc_1080p_set_encode_circular_intra_refresh(u32 n_cir_num);
void vidc_1080p_set_encode_input_frame_format(
	enum vidc_1080p_memory_access_method_type e_memory_format);
void vidc_1080p_set_encode_padding_control(u32 b_pad_ctrl_on,
	u32 n_cr_pad_val, u32 n_cb_pad_val, u32 n_luma_pad_val);
void vidc_1080p_encode_set_rc_config(u32 b_enable_frame_level_rc,
	u32 b_enable_mb_level_rc_flag, u32 n_frame_qp);
void vidc_1080p_encode_set_frame_level_rc_params(u32 n_rc_frame_rate,
	u32 n_target_bitrate, u32 n_reaction_coeff);
void vidc_1080p_encode_set_qp_params(u32 n_max_qp, u32 n_min_qp);
void vidc_1080p_encode_set_mb_level_rc_params(u32 b_dark_region_as_flag,
	u32 b_smooth_region_as_flag, u32 b_static_region_as_flag,
	u32 b_activity_region_flag);
void vidc_1080p_get_qp(u32 *pn_frame_qp);
void vidc_1080p_set_h264_encode_entropy(
	enum vidc_1080p_entropy_sel_type e_entropy_sel);
void vidc_1080p_set_h264_encode_loop_filter(
	enum vidc_1080p_DBConfig_type e_db_config, u32 n_slice_alpha_offset,
	u32 n_slice_beta_offset);
void vidc_1080p_set_h264_encoder_ref_count(u32 n_max_reference);
void vidc_1080p_set_h264_encode_8x8transform_control(u32 b_enable_8x8transform);
void vidc_1080p_set_mpeg4_encode_quarter_pel_control(
	u32 b_enable_mpeg4_quarter_pel);
void vidc_1080p_set_device_base_addr(u8 *mapped_va);
void vidc_1080p_get_intra_bias(u32 *p_intra_bias);
void vidc_1080p_set_intra_bias(u32 intra_bias);
void vidc_1080p_get_bi_directional_bias(u32 *p_bi_directional_bias);
void vidc_1080p_set_bi_directional_bias(u32 bi_directional_bias);
void vidc_1080p_get_encoder_sequence_header_size(u32 *p_seq_header_size);
void vidc_1080p_get_intermedia_stage_debug_counter(
	u32 *p_intermediate_stage_counter);
void vidc_1080p_get_exception_status(u32 *p_exception_status);
#endif
