/******************************************************************************
 * Copyright 2017 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

/**
 * @file localization_gflags.h
 * @brief The gflags used by localization module
 */

#ifndef MODULES_LOCALIZATION_COMMON_LOCALIZATION_GFLAGS_H_
#define MODULES_LOCALIZATION_COMMON_LOCALIZATION_GFLAGS_H_

#include "gflags/gflags.h"

DECLARE_string(localization_module_name);

DECLARE_double(localization_publish_freq);

DECLARE_string(localization_config_file);
DECLARE_string(rtk_adapter_config_file);
DECLARE_string(msf_adapter_config_file);
DECLARE_string(msf_visual_adapter_config_file);
DECLARE_string(lmd_adapter_config_file);
DECLARE_string(lmd_rawinput_bag_file);
DECLARE_string(lmd_rawinput_bin_file);

DECLARE_bool(enable_gps_imu_interprolate);
DECLARE_bool(enable_map_reference_unify);
DECLARE_bool(enable_watchdog);
DECLARE_bool(enable_gps_heading);
DECLARE_bool(enable_heading_filter);

DECLARE_double(gps_time_delay_tolerance);
DECLARE_double(gps_imu_timestamp_sec_diff_tolerance);
DECLARE_double(timestamp_sec_tolerance);

DECLARE_double(map_offset_x);
DECLARE_double(map_offset_y);
DECLARE_double(map_offset_z);

DECLARE_int32(report_threshold_err_num);
DECLARE_double(report_gps_imu_time_diff_threshold);

DECLARE_bool(enable_gps_timestamp);

DECLARE_bool(enable_lmd_premapping);
DECLARE_bool(enable_lmd_mapping);
DECLARE_bool(enable_lmd_imu_filter);
DECLARE_bool(enable_lmd_chassis_speed);

// lidar module
DECLARE_string(local_map_name);
DECLARE_string(lidar_extrinsics_file);
DECLARE_string(lidar_height_file);
DECLARE_double(lidar_height_default);
DECLARE_int32(lidar_localization_mode);
DECLARE_int32(lidar_yaw_align_mode);
DECLARE_int32(lidar_filter_size);
DECLARE_double(lidar_imu_max_delay_time);
DECLARE_double(lidar_map_coverage_theshold);
DECLARE_bool(lidar_debug_log_flag);
DECLARE_int32(point_cloud_step);

// integ module
DECLARE_bool(integ_ins_can_self_align);
DECLARE_bool(integ_sins_align_with_vel);
DECLARE_bool(integ_sins_state_check);
DECLARE_double(integ_sins_state_span_time);
DECLARE_double(integ_sins_state_pos_std);

DECLARE_double(vel_threshold_get_yaw);

// gnss module
DECLARE_bool(enable_ins_aid_rtk);
DECLARE_string(eph_buffer_path);
DECLARE_string(ant_imu_leverarm_file);
DECLARE_bool(gnss_debug_log_flag);
DECLARE_bool(if_imuant_from_file);
DECLARE_double(imu_to_ant_offset_x);
DECLARE_double(imu_to_ant_offset_y);
DECLARE_double(imu_to_ant_offset_z);
DECLARE_double(imu_to_ant_offset_ux);
DECLARE_double(imu_to_ant_offset_uy);
DECLARE_double(imu_to_ant_offset_uz);

// common
DECLARE_double(imu_rate);
DECLARE_bool(if_utm_zone_id_from_folder);
DECLARE_bool(trans_gpstime_to_utctime);
DECLARE_int32(gnss_mode);
DECLARE_bool(imu_coord_rfu);
DECLARE_bool(gnss_only_init);
DECLARE_bool(enable_lidar_localization);

// imu vehicle extrinsic
DECLARE_string(vehicle_imu_file);
DECLARE_bool(if_vehicle_imu_from_file);
DECLARE_double(imu_vehicle_qx);
DECLARE_double(imu_vehicle_qy);
DECLARE_double(imu_vehicle_qz);
DECLARE_double(imu_vehicle_qw);

// visualization
DECLARE_string(map_visual_dir);

#endif  // MODULES_LOCALIZATION_COMMON_LOCALIZATION_GFLAGS_H_
