// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: messages/model.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_messages_2fmodel_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_messages_2fmodel_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012003 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_messages_2fmodel_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_messages_2fmodel_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_messages_2fmodel_2eproto;
namespace bestia {
namespace messages {
class Account;
class AccountDefaultTypeInternal;
extern AccountDefaultTypeInternal _Account_default_instance_;
class Vec3;
class Vec3DefaultTypeInternal;
extern Vec3DefaultTypeInternal _Vec3_default_instance_;
}  // namespace messages
}  // namespace bestia
PROTOBUF_NAMESPACE_OPEN
template<> ::bestia::messages::Account* Arena::CreateMaybeMessage<::bestia::messages::Account>(Arena*);
template<> ::bestia::messages::Vec3* Arena::CreateMaybeMessage<::bestia::messages::Vec3>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace bestia {
namespace messages {

enum Element : int {
  NORMAL = 0,
  WATER = 1,
  EARTH = 2,
  FIRE = 3,
  WIND = 4,
  POISON = 5,
  HOLY = 6,
  SHADOW = 7,
  GHOST = 8,
  UNDEAD = 9,
  NORMAL_2 = 10,
  WATER_2 = 11,
  EARTH_2 = 12,
  FIRE_2 = 13,
  WIND_2 = 14,
  POISON_2 = 15,
  HOLY_2 = 16,
  SHADOW_2 = 17,
  GHOST_2 = 18,
  UNDEAD_2 = 19,
  NORMAL_3 = 20,
  WATER_3 = 21,
  EARTH_3 = 22,
  FIRE_3 = 23,
  WIND_3 = 24,
  POISON_3 = 25,
  HOLY_3 = 26,
  SHADOW_3 = 27,
  GHOST_3 = 28,
  UNDEAD_3 = 29,
  NORMAL_4 = 30,
  WATER_4 = 31,
  EARTH_4 = 32,
  FIRE_4 = 33,
  WIND_4 = 34,
  POISON_4 = 35,
  HOLY_4 = 36,
  SHADOW_4 = 37,
  GHOST_4 = 38,
  UNDEAD_4 = 39,
  Element_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  Element_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool Element_IsValid(int value);
constexpr Element Element_MIN = NORMAL;
constexpr Element Element_MAX = UNDEAD_4;
constexpr int Element_ARRAYSIZE = Element_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Element_descriptor();
template<typename T>
inline const std::string& Element_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Element>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Element_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Element_descriptor(), enum_t_value);
}
inline bool Element_Parse(
    const std::string& name, Element* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Element>(
    Element_descriptor(), name, value);
}
// ===================================================================

class Vec3 PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:bestia.messages.Vec3) */ {
 public:
  inline Vec3() : Vec3(nullptr) {};
  virtual ~Vec3();

  Vec3(const Vec3& from);
  Vec3(Vec3&& from) noexcept
    : Vec3() {
    *this = ::std::move(from);
  }

  inline Vec3& operator=(const Vec3& from) {
    CopyFrom(from);
    return *this;
  }
  inline Vec3& operator=(Vec3&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Vec3& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Vec3* internal_default_instance() {
    return reinterpret_cast<const Vec3*>(
               &_Vec3_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Vec3& a, Vec3& b) {
    a.Swap(&b);
  }
  inline void Swap(Vec3* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Vec3* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Vec3* New() const final {
    return CreateMaybeMessage<Vec3>(nullptr);
  }

  Vec3* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Vec3>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Vec3& from);
  void MergeFrom(const Vec3& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Vec3* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "bestia.messages.Vec3";
  }
  protected:
  explicit Vec3(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_messages_2fmodel_2eproto);
    return ::descriptor_table_messages_2fmodel_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kXFieldNumber = 1,
    kYFieldNumber = 2,
    kZFieldNumber = 3,
  };
  // int64 x = 1;
  void clear_x();
  ::PROTOBUF_NAMESPACE_ID::int64 x() const;
  void set_x(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_x() const;
  void _internal_set_x(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // int64 y = 2;
  void clear_y();
  ::PROTOBUF_NAMESPACE_ID::int64 y() const;
  void set_y(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_y() const;
  void _internal_set_y(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // int64 z = 3;
  void clear_z();
  ::PROTOBUF_NAMESPACE_ID::int64 z() const;
  void set_z(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_z() const;
  void _internal_set_z(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // @@protoc_insertion_point(class_scope:bestia.messages.Vec3)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::int64 x_;
  ::PROTOBUF_NAMESPACE_ID::int64 y_;
  ::PROTOBUF_NAMESPACE_ID::int64 z_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_messages_2fmodel_2eproto;
};
// -------------------------------------------------------------------

class Account PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:bestia.messages.Account) */ {
 public:
  inline Account() : Account(nullptr) {};
  virtual ~Account();

  Account(const Account& from);
  Account(Account&& from) noexcept
    : Account() {
    *this = ::std::move(from);
  }

  inline Account& operator=(const Account& from) {
    CopyFrom(from);
    return *this;
  }
  inline Account& operator=(Account&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Account& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Account* internal_default_instance() {
    return reinterpret_cast<const Account*>(
               &_Account_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Account& a, Account& b) {
    a.Swap(&b);
  }
  inline void Swap(Account* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Account* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Account* New() const final {
    return CreateMaybeMessage<Account>(nullptr);
  }

  Account* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Account>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Account& from);
  void MergeFrom(const Account& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Account* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "bestia.messages.Account";
  }
  protected:
  explicit Account(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_messages_2fmodel_2eproto);
    return ::descriptor_table_messages_2fmodel_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAccountIdFieldNumber = 1,
  };
  // uint64 account_id = 1;
  void clear_account_id();
  ::PROTOBUF_NAMESPACE_ID::uint64 account_id() const;
  void set_account_id(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_account_id() const;
  void _internal_set_account_id(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // @@protoc_insertion_point(class_scope:bestia.messages.Account)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::uint64 account_id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_messages_2fmodel_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Vec3

// int64 x = 1;
inline void Vec3::clear_x() {
  x_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Vec3::_internal_x() const {
  return x_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Vec3::x() const {
  // @@protoc_insertion_point(field_get:bestia.messages.Vec3.x)
  return _internal_x();
}
inline void Vec3::_internal_set_x(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  x_ = value;
}
inline void Vec3::set_x(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_x(value);
  // @@protoc_insertion_point(field_set:bestia.messages.Vec3.x)
}

// int64 y = 2;
inline void Vec3::clear_y() {
  y_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Vec3::_internal_y() const {
  return y_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Vec3::y() const {
  // @@protoc_insertion_point(field_get:bestia.messages.Vec3.y)
  return _internal_y();
}
inline void Vec3::_internal_set_y(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  y_ = value;
}
inline void Vec3::set_y(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_y(value);
  // @@protoc_insertion_point(field_set:bestia.messages.Vec3.y)
}

// int64 z = 3;
inline void Vec3::clear_z() {
  z_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Vec3::_internal_z() const {
  return z_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Vec3::z() const {
  // @@protoc_insertion_point(field_get:bestia.messages.Vec3.z)
  return _internal_z();
}
inline void Vec3::_internal_set_z(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  z_ = value;
}
inline void Vec3::set_z(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_z(value);
  // @@protoc_insertion_point(field_set:bestia.messages.Vec3.z)
}

// -------------------------------------------------------------------

// Account

// uint64 account_id = 1;
inline void Account::clear_account_id() {
  account_id_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 Account::_internal_account_id() const {
  return account_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 Account::account_id() const {
  // @@protoc_insertion_point(field_get:bestia.messages.Account.account_id)
  return _internal_account_id();
}
inline void Account::_internal_set_account_id(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  account_id_ = value;
}
inline void Account::set_account_id(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_account_id(value);
  // @@protoc_insertion_point(field_set:bestia.messages.Account.account_id)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace messages
}  // namespace bestia

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::bestia::messages::Element> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::bestia::messages::Element>() {
  return ::bestia::messages::Element_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_messages_2fmodel_2eproto
