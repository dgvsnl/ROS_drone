// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Point.proto

#ifndef PROTOBUF_Point_2eproto__INCLUDED
#define PROTOBUF_Point_2eproto__INCLUDED

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

namespace gz_geometry_msgs {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Point_2eproto();
void protobuf_AssignDesc_Point_2eproto();
void protobuf_ShutdownFile_Point_2eproto();

class Point;

// ===================================================================

class Point : public ::google::protobuf::Message {
 public:
  Point();
  virtual ~Point();

  Point(const Point& from);

  inline Point& operator=(const Point& from) {
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
  static const Point& default_instance();

  void Swap(Point* other);

  // implements Message ----------------------------------------------

  Point* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Point& from);
  void MergeFrom(const Point& from);
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

  // required double x = 1;
  inline bool has_x() const;
  inline void clear_x();
  static const int kXFieldNumber = 1;
  inline double x() const;
  inline void set_x(double value);

  // required double y = 2;
  inline bool has_y() const;
  inline void clear_y();
  static const int kYFieldNumber = 2;
  inline double y() const;
  inline void set_y(double value);

  // required double z = 3;
  inline bool has_z() const;
  inline void clear_z();
  static const int kZFieldNumber = 3;
  inline double z() const;
  inline void set_z(double value);

  // @@protoc_insertion_point(class_scope:gz_geometry_msgs.Point)
 private:
  inline void set_has_x();
  inline void clear_has_x();
  inline void set_has_y();
  inline void clear_has_y();
  inline void set_has_z();
  inline void clear_has_z();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  double x_;
  double y_;
  double z_;
  friend void  protobuf_AddDesc_Point_2eproto();
  friend void protobuf_AssignDesc_Point_2eproto();
  friend void protobuf_ShutdownFile_Point_2eproto();

  void InitAsDefaultInstance();
  static Point* default_instance_;
};
// ===================================================================


// ===================================================================

// Point

// required double x = 1;
inline bool Point::has_x() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Point::set_has_x() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Point::clear_has_x() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Point::clear_x() {
  x_ = 0;
  clear_has_x();
}
inline double Point::x() const {
  // @@protoc_insertion_point(field_get:gz_geometry_msgs.Point.x)
  return x_;
}
inline void Point::set_x(double value) {
  set_has_x();
  x_ = value;
  // @@protoc_insertion_point(field_set:gz_geometry_msgs.Point.x)
}

// required double y = 2;
inline bool Point::has_y() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Point::set_has_y() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Point::clear_has_y() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Point::clear_y() {
  y_ = 0;
  clear_has_y();
}
inline double Point::y() const {
  // @@protoc_insertion_point(field_get:gz_geometry_msgs.Point.y)
  return y_;
}
inline void Point::set_y(double value) {
  set_has_y();
  y_ = value;
  // @@protoc_insertion_point(field_set:gz_geometry_msgs.Point.y)
}

// required double z = 3;
inline bool Point::has_z() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Point::set_has_z() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Point::clear_has_z() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Point::clear_z() {
  z_ = 0;
  clear_has_z();
}
inline double Point::z() const {
  // @@protoc_insertion_point(field_get:gz_geometry_msgs.Point.z)
  return z_;
}
inline void Point::set_z(double value) {
  set_has_z();
  z_ = value;
  // @@protoc_insertion_point(field_set:gz_geometry_msgs.Point.z)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace gz_geometry_msgs

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Point_2eproto__INCLUDED
