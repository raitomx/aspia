// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: status.proto

#ifndef PROTOBUF_status_2eproto__INCLUDED
#define PROTOBUF_status_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003002 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_util.h>
// @@protoc_insertion_point(includes)
namespace aspia {
namespace proto {
}  // namespace proto
}  // namespace aspia

namespace aspia {
namespace proto {

namespace protobuf_status_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_status_2eproto

enum Status {
  STATUS_SUCCESS = 0,
  STATUS_NO_CONSOLE_SESSION = 1,
  STATUS_ACCESS_DENIED = 2,
  STATUS_FILE_NOT_FOUND = 3,
  STATUS_PATH_NOT_FOUND = 4,
  STATUS_FILE_ALREADY_EXISTS = 5,
  STATUS_PATH_ALREADY_EXISTS = 6,
  STATUS_DISK_FULL = 7,
  STATUS_INVALID_FILE_NAME = 8,
  STATUS_INVALID_PATH_NAME = 9,
  STATUS_INVALID_ADDRESS = 10,
  STATUS_INVALID_PORT = 11,
  STATUS_CONNECT_TIMEOUT = 12,
  STATUS_CONNECT_ERROR = 13,
  STATUS_CONNECTING = 14,
  Status_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Status_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool Status_IsValid(int value);
const Status Status_MIN = STATUS_SUCCESS;
const Status Status_MAX = STATUS_CONNECTING;
const int Status_ARRAYSIZE = Status_MAX + 1;

// ===================================================================


// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace proto
}  // namespace aspia

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::aspia::proto::Status> : ::google::protobuf::internal::true_type {};

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_status_2eproto__INCLUDED
