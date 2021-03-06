// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protocolBuffer.typeCollection.proto

#ifndef PROTOBUF_protocolBuffer_2etypeCollection_2eproto__INCLUDED
#define PROTOBUF_protocolBuffer_2etypeCollection_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protocolBuffer {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_protocolBuffer_2etypeCollection_2eproto();
void protobuf_AssignDesc_protocolBuffer_2etypeCollection_2eproto();
void protobuf_ShutdownFile_protocolBuffer_2etypeCollection_2eproto();

class typeCollection;

// ===================================================================

class typeCollection : public ::google::protobuf::Message {
 public:
  typeCollection();
  virtual ~typeCollection();

  typeCollection(const typeCollection& from);

  inline typeCollection& operator=(const typeCollection& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const typeCollection& default_instance();

  void Swap(typeCollection* other);

  // implements Message ----------------------------------------------

  typeCollection* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const typeCollection& from);
  void MergeFrom(const typeCollection& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 int32ID = 1;
  inline bool has_int32id() const;
  inline void clear_int32id();
  static const int kInt32IDFieldNumber = 1;
  inline ::google::protobuf::int32 int32id() const;
  inline void set_int32id(::google::protobuf::int32 value);

  // required int64 int64ID = 2;
  inline bool has_int64id() const;
  inline void clear_int64id();
  static const int kInt64IDFieldNumber = 2;
  inline ::google::protobuf::int64 int64id() const;
  inline void set_int64id(::google::protobuf::int64 value);

  // optional uint32 uint32ID = 3;
  inline bool has_uint32id() const;
  inline void clear_uint32id();
  static const int kUint32IDFieldNumber = 3;
  inline ::google::protobuf::uint32 uint32id() const;
  inline void set_uint32id(::google::protobuf::uint32 value);

  // required uint64 uint64ID = 4;
  inline bool has_uint64id() const;
  inline void clear_uint64id();
  static const int kUint64IDFieldNumber = 4;
  inline ::google::protobuf::uint64 uint64id() const;
  inline void set_uint64id(::google::protobuf::uint64 value);

  // required sint32 sint32ID = 5;
  inline bool has_sint32id() const;
  inline void clear_sint32id();
  static const int kSint32IDFieldNumber = 5;
  inline ::google::protobuf::int32 sint32id() const;
  inline void set_sint32id(::google::protobuf::int32 value);

  // required sint64 sint64ID = 6;
  inline bool has_sint64id() const;
  inline void clear_sint64id();
  static const int kSint64IDFieldNumber = 6;
  inline ::google::protobuf::int64 sint64id() const;
  inline void set_sint64id(::google::protobuf::int64 value);

  // required fixed32 fint32ID = 7;
  inline bool has_fint32id() const;
  inline void clear_fint32id();
  static const int kFint32IDFieldNumber = 7;
  inline ::google::protobuf::uint32 fint32id() const;
  inline void set_fint32id(::google::protobuf::uint32 value);

  // required fixed64 fint64ID = 8;
  inline bool has_fint64id() const;
  inline void clear_fint64id();
  static const int kFint64IDFieldNumber = 8;
  inline ::google::protobuf::uint64 fint64id() const;
  inline void set_fint64id(::google::protobuf::uint64 value);

  // required sfixed32 sfint32ID = 9;
  inline bool has_sfint32id() const;
  inline void clear_sfint32id();
  static const int kSfint32IDFieldNumber = 9;
  inline ::google::protobuf::int32 sfint32id() const;
  inline void set_sfint32id(::google::protobuf::int32 value);

  // required sfixed64 sfint64ID = 10;
  inline bool has_sfint64id() const;
  inline void clear_sfint64id();
  static const int kSfint64IDFieldNumber = 10;
  inline ::google::protobuf::int64 sfint64id() const;
  inline void set_sfint64id(::google::protobuf::int64 value);

  // required bool isNull = 11;
  inline bool has_isnull() const;
  inline void clear_isnull();
  static const int kIsNullFieldNumber = 11;
  inline bool isnull() const;
  inline void set_isnull(bool value);

  // required string name = 12;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 12;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // required float height = 13;
  inline bool has_height() const;
  inline void clear_height();
  static const int kHeightFieldNumber = 13;
  inline float height() const;
  inline void set_height(float value);

  // required double with = 14;
  inline bool has_with() const;
  inline void clear_with();
  static const int kWithFieldNumber = 14;
  inline double with() const;
  inline void set_with(double value);

  // @@protoc_insertion_point(class_scope:protocolBuffer.typeCollection)
 private:
  inline void set_has_int32id();
  inline void clear_has_int32id();
  inline void set_has_int64id();
  inline void clear_has_int64id();
  inline void set_has_uint32id();
  inline void clear_has_uint32id();
  inline void set_has_uint64id();
  inline void clear_has_uint64id();
  inline void set_has_sint32id();
  inline void clear_has_sint32id();
  inline void set_has_sint64id();
  inline void clear_has_sint64id();
  inline void set_has_fint32id();
  inline void clear_has_fint32id();
  inline void set_has_fint64id();
  inline void clear_has_fint64id();
  inline void set_has_sfint32id();
  inline void clear_has_sfint32id();
  inline void set_has_sfint64id();
  inline void clear_has_sfint64id();
  inline void set_has_isnull();
  inline void clear_has_isnull();
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_height();
  inline void clear_has_height();
  inline void set_has_with();
  inline void clear_has_with();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int64 int64id_;
  ::google::protobuf::int32 int32id_;
  ::google::protobuf::uint32 uint32id_;
  ::google::protobuf::uint64 uint64id_;
  ::google::protobuf::int64 sint64id_;
  ::google::protobuf::int32 sint32id_;
  ::google::protobuf::uint32 fint32id_;
  ::google::protobuf::uint64 fint64id_;
  ::google::protobuf::int64 sfint64id_;
  ::google::protobuf::int32 sfint32id_;
  bool isnull_;
  ::std::string* name_;
  double with_;
  float height_;
  friend void  protobuf_AddDesc_protocolBuffer_2etypeCollection_2eproto();
  friend void protobuf_AssignDesc_protocolBuffer_2etypeCollection_2eproto();
  friend void protobuf_ShutdownFile_protocolBuffer_2etypeCollection_2eproto();

  void InitAsDefaultInstance();
  static typeCollection* default_instance_;
};
// ===================================================================


// ===================================================================

// typeCollection

// required int32 int32ID = 1;
inline bool typeCollection::has_int32id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void typeCollection::set_has_int32id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void typeCollection::clear_has_int32id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void typeCollection::clear_int32id() {
  int32id_ = 0;
  clear_has_int32id();
}
inline ::google::protobuf::int32 typeCollection::int32id() const {
  // @@protoc_insertion_point(field_get:protocolBuffer.typeCollection.int32ID)
  return int32id_;
}
inline void typeCollection::set_int32id(::google::protobuf::int32 value) {
  set_has_int32id();
  int32id_ = value;
  // @@protoc_insertion_point(field_set:protocolBuffer.typeCollection.int32ID)
}

// required int64 int64ID = 2;
inline bool typeCollection::has_int64id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void typeCollection::set_has_int64id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void typeCollection::clear_has_int64id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void typeCollection::clear_int64id() {
  int64id_ = GOOGLE_LONGLONG(0);
  clear_has_int64id();
}
inline ::google::protobuf::int64 typeCollection::int64id() const {
  // @@protoc_insertion_point(field_get:protocolBuffer.typeCollection.int64ID)
  return int64id_;
}
inline void typeCollection::set_int64id(::google::protobuf::int64 value) {
  set_has_int64id();
  int64id_ = value;
  // @@protoc_insertion_point(field_set:protocolBuffer.typeCollection.int64ID)
}

// optional uint32 uint32ID = 3;
inline bool typeCollection::has_uint32id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void typeCollection::set_has_uint32id() {
  _has_bits_[0] |= 0x00000004u;
}
inline void typeCollection::clear_has_uint32id() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void typeCollection::clear_uint32id() {
  uint32id_ = 0u;
  clear_has_uint32id();
}
inline ::google::protobuf::uint32 typeCollection::uint32id() const {
  // @@protoc_insertion_point(field_get:protocolBuffer.typeCollection.uint32ID)
  return uint32id_;
}
inline void typeCollection::set_uint32id(::google::protobuf::uint32 value) {
  set_has_uint32id();
  uint32id_ = value;
  // @@protoc_insertion_point(field_set:protocolBuffer.typeCollection.uint32ID)
}

// required uint64 uint64ID = 4;
inline bool typeCollection::has_uint64id() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void typeCollection::set_has_uint64id() {
  _has_bits_[0] |= 0x00000008u;
}
inline void typeCollection::clear_has_uint64id() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void typeCollection::clear_uint64id() {
  uint64id_ = GOOGLE_ULONGLONG(0);
  clear_has_uint64id();
}
inline ::google::protobuf::uint64 typeCollection::uint64id() const {
  // @@protoc_insertion_point(field_get:protocolBuffer.typeCollection.uint64ID)
  return uint64id_;
}
inline void typeCollection::set_uint64id(::google::protobuf::uint64 value) {
  set_has_uint64id();
  uint64id_ = value;
  // @@protoc_insertion_point(field_set:protocolBuffer.typeCollection.uint64ID)
}

// required sint32 sint32ID = 5;
inline bool typeCollection::has_sint32id() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void typeCollection::set_has_sint32id() {
  _has_bits_[0] |= 0x00000010u;
}
inline void typeCollection::clear_has_sint32id() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void typeCollection::clear_sint32id() {
  sint32id_ = 0;
  clear_has_sint32id();
}
inline ::google::protobuf::int32 typeCollection::sint32id() const {
  // @@protoc_insertion_point(field_get:protocolBuffer.typeCollection.sint32ID)
  return sint32id_;
}
inline void typeCollection::set_sint32id(::google::protobuf::int32 value) {
  set_has_sint32id();
  sint32id_ = value;
  // @@protoc_insertion_point(field_set:protocolBuffer.typeCollection.sint32ID)
}

// required sint64 sint64ID = 6;
inline bool typeCollection::has_sint64id() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void typeCollection::set_has_sint64id() {
  _has_bits_[0] |= 0x00000020u;
}
inline void typeCollection::clear_has_sint64id() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void typeCollection::clear_sint64id() {
  sint64id_ = GOOGLE_LONGLONG(0);
  clear_has_sint64id();
}
inline ::google::protobuf::int64 typeCollection::sint64id() const {
  // @@protoc_insertion_point(field_get:protocolBuffer.typeCollection.sint64ID)
  return sint64id_;
}
inline void typeCollection::set_sint64id(::google::protobuf::int64 value) {
  set_has_sint64id();
  sint64id_ = value;
  // @@protoc_insertion_point(field_set:protocolBuffer.typeCollection.sint64ID)
}

// required fixed32 fint32ID = 7;
inline bool typeCollection::has_fint32id() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void typeCollection::set_has_fint32id() {
  _has_bits_[0] |= 0x00000040u;
}
inline void typeCollection::clear_has_fint32id() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void typeCollection::clear_fint32id() {
  fint32id_ = 0u;
  clear_has_fint32id();
}
inline ::google::protobuf::uint32 typeCollection::fint32id() const {
  // @@protoc_insertion_point(field_get:protocolBuffer.typeCollection.fint32ID)
  return fint32id_;
}
inline void typeCollection::set_fint32id(::google::protobuf::uint32 value) {
  set_has_fint32id();
  fint32id_ = value;
  // @@protoc_insertion_point(field_set:protocolBuffer.typeCollection.fint32ID)
}

// required fixed64 fint64ID = 8;
inline bool typeCollection::has_fint64id() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void typeCollection::set_has_fint64id() {
  _has_bits_[0] |= 0x00000080u;
}
inline void typeCollection::clear_has_fint64id() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void typeCollection::clear_fint64id() {
  fint64id_ = GOOGLE_ULONGLONG(0);
  clear_has_fint64id();
}
inline ::google::protobuf::uint64 typeCollection::fint64id() const {
  // @@protoc_insertion_point(field_get:protocolBuffer.typeCollection.fint64ID)
  return fint64id_;
}
inline void typeCollection::set_fint64id(::google::protobuf::uint64 value) {
  set_has_fint64id();
  fint64id_ = value;
  // @@protoc_insertion_point(field_set:protocolBuffer.typeCollection.fint64ID)
}

// required sfixed32 sfint32ID = 9;
inline bool typeCollection::has_sfint32id() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void typeCollection::set_has_sfint32id() {
  _has_bits_[0] |= 0x00000100u;
}
inline void typeCollection::clear_has_sfint32id() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void typeCollection::clear_sfint32id() {
  sfint32id_ = 0;
  clear_has_sfint32id();
}
inline ::google::protobuf::int32 typeCollection::sfint32id() const {
  // @@protoc_insertion_point(field_get:protocolBuffer.typeCollection.sfint32ID)
  return sfint32id_;
}
inline void typeCollection::set_sfint32id(::google::protobuf::int32 value) {
  set_has_sfint32id();
  sfint32id_ = value;
  // @@protoc_insertion_point(field_set:protocolBuffer.typeCollection.sfint32ID)
}

// required sfixed64 sfint64ID = 10;
inline bool typeCollection::has_sfint64id() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void typeCollection::set_has_sfint64id() {
  _has_bits_[0] |= 0x00000200u;
}
inline void typeCollection::clear_has_sfint64id() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void typeCollection::clear_sfint64id() {
  sfint64id_ = GOOGLE_LONGLONG(0);
  clear_has_sfint64id();
}
inline ::google::protobuf::int64 typeCollection::sfint64id() const {
  // @@protoc_insertion_point(field_get:protocolBuffer.typeCollection.sfint64ID)
  return sfint64id_;
}
inline void typeCollection::set_sfint64id(::google::protobuf::int64 value) {
  set_has_sfint64id();
  sfint64id_ = value;
  // @@protoc_insertion_point(field_set:protocolBuffer.typeCollection.sfint64ID)
}

// required bool isNull = 11;
inline bool typeCollection::has_isnull() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void typeCollection::set_has_isnull() {
  _has_bits_[0] |= 0x00000400u;
}
inline void typeCollection::clear_has_isnull() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void typeCollection::clear_isnull() {
  isnull_ = false;
  clear_has_isnull();
}
inline bool typeCollection::isnull() const {
  // @@protoc_insertion_point(field_get:protocolBuffer.typeCollection.isNull)
  return isnull_;
}
inline void typeCollection::set_isnull(bool value) {
  set_has_isnull();
  isnull_ = value;
  // @@protoc_insertion_point(field_set:protocolBuffer.typeCollection.isNull)
}

// required string name = 12;
inline bool typeCollection::has_name() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void typeCollection::set_has_name() {
  _has_bits_[0] |= 0x00000800u;
}
inline void typeCollection::clear_has_name() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void typeCollection::clear_name() {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& typeCollection::name() const {
  // @@protoc_insertion_point(field_get:protocolBuffer.typeCollection.name)
  return *name_;
}
inline void typeCollection::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set:protocolBuffer.typeCollection.name)
}
inline void typeCollection::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set_char:protocolBuffer.typeCollection.name)
}
inline void typeCollection::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:protocolBuffer.typeCollection.name)
}
inline ::std::string* typeCollection::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:protocolBuffer.typeCollection.name)
  return name_;
}
inline ::std::string* typeCollection::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void typeCollection::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:protocolBuffer.typeCollection.name)
}

// required float height = 13;
inline bool typeCollection::has_height() const {
  return (_has_bits_[0] & 0x00001000u) != 0;
}
inline void typeCollection::set_has_height() {
  _has_bits_[0] |= 0x00001000u;
}
inline void typeCollection::clear_has_height() {
  _has_bits_[0] &= ~0x00001000u;
}
inline void typeCollection::clear_height() {
  height_ = 0;
  clear_has_height();
}
inline float typeCollection::height() const {
  // @@protoc_insertion_point(field_get:protocolBuffer.typeCollection.height)
  return height_;
}
inline void typeCollection::set_height(float value) {
  set_has_height();
  height_ = value;
  // @@protoc_insertion_point(field_set:protocolBuffer.typeCollection.height)
}

// required double with = 14;
inline bool typeCollection::has_with() const {
  return (_has_bits_[0] & 0x00002000u) != 0;
}
inline void typeCollection::set_has_with() {
  _has_bits_[0] |= 0x00002000u;
}
inline void typeCollection::clear_has_with() {
  _has_bits_[0] &= ~0x00002000u;
}
inline void typeCollection::clear_with() {
  with_ = 0;
  clear_has_with();
}
inline double typeCollection::with() const {
  // @@protoc_insertion_point(field_get:protocolBuffer.typeCollection.with)
  return with_;
}
inline void typeCollection::set_with(double value) {
  set_has_with();
  with_ = value;
  // @@protoc_insertion_point(field_set:protocolBuffer.typeCollection.with)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace protocolBuffer

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_protocolBuffer_2etypeCollection_2eproto__INCLUDED
