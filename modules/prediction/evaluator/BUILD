load("//tools:cpplint.bzl", "cpplint")

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "evaluator_manager",
    srcs = ["evaluator_manager.cc"],
    hdrs = ["evaluator_manager.h"],
    deps = [
        "//cyber",
        "//modules/perception/proto:perception_proto",
        "//modules/prediction/container:container_manager",
        "//modules/prediction/container/obstacles:obstacles_container",
        "//modules/prediction/evaluator/vehicle:cost_evaluator",
        "//modules/prediction/evaluator/vehicle:cruise_mlp_evaluator",
        "//modules/prediction/evaluator/vehicle:junction_mlp_evaluator",
        "//modules/prediction/evaluator/vehicle:mlp_evaluator",
        "//modules/prediction/evaluator/vehicle:rnn_evaluator",
        "//modules/prediction/evaluator/cyclist:cyclist_keep_lane_evaluator",
        "//modules/prediction/proto:prediction_conf_proto",
        "//modules/prediction/scenario:scenario_manager",
        "@glog",
    ],
)

cc_test(
    name = "evaluator_manager_test",
    size = "small",
    srcs = ["evaluator_manager_test.cc"],
    data = [
        "//modules/prediction:prediction_data",
        "//modules/prediction:prediction_testdata",
    ],
    deps = [
        "//modules/common/util",
        "//modules/perception/proto:perception_proto",
        "//modules/prediction/common:kml_map_based_test",
        "//modules/prediction/common:prediction_gflags",
        "//modules/prediction/container:container_manager",
        "//modules/prediction/container/obstacles:obstacles_container",
        "//modules/prediction/evaluator:evaluator_manager",
        "//modules/prediction/evaluator/vehicle:cost_evaluator",
        "//modules/prediction/evaluator/vehicle:mlp_evaluator",
        "//modules/prediction/evaluator/vehicle:rnn_evaluator",
        "//modules/prediction/proto:prediction_conf_proto",
        "@gtest//:main",
    ],
)

cc_library(
    name = "evaluator",
    hdrs = ["evaluator.h"],
    deps = [
        "//modules/prediction/container/obstacles:obstacle",
    ],
)

cpplint()
