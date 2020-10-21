// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: messages/interaction.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_messages_2finteraction_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_messages_2finteraction_2eproto

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
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_messages_2finteraction_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_messages_2finteraction_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_messages_2finteraction_2eproto;
namespace bestia {
namespace messages {
namespace interaction {
class InteractionRequest;
class InteractionRequestDefaultTypeInternal;
extern InteractionRequestDefaultTypeInternal _InteractionRequest_default_instance_;
class InteractionResponse;
class InteractionResponseDefaultTypeInternal;
extern InteractionResponseDefaultTypeInternal _InteractionResponse_default_instance_;
}  // namespace interaction
}  // namespace messages
}  // namespace bestia
PROTOBUF_NAMESPACE_OPEN
template<> ::bestia::messages::interaction::InteractionRequest* Arena::CreateMaybeMessage<::bestia::messages::interaction::InteractionRequest>(Arena*);
template<> ::bestia::messages::interaction::InteractionResponse* Arena::CreateMaybeMessage<::bestia::messages::interaction::InteractionResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace bestia {
namespace messages {
namespace interaction {

// ===================================================================

class InteractionRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:bestia.messages.interaction.InteractionRequest) */ {
 public:
  inline InteractionRequest() : InteractionRequest(nullptr) {};
  virtual ~InteractionRequest();

  InteractionRequest(const InteractionRequest& from);
  InteractionRequest(InteractionRequest&& from) noexcept
    : InteractionRequest() {
    *this = ::std::move(from);
  }

  inline InteractionRequest& operator=(const InteractionRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline InteractionRequest& operator=(InteractionRequest&& from) noexcept {
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
  static const InteractionRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const InteractionRequest* internal_default_instance() {
    return reinterpret_cast<const InteractionRequest*>(
               &_InteractionRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(InteractionRequest& a, InteractionRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(InteractionRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(InteractionRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline InteractionRequest* New() const final {
    return CreateMaybeMessage<InteractionRequest>(nullptr);
  }

  InteractionRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<InteractionRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const InteractionRequest& from);
  void MergeFrom(const InteractionRequest& from);
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
  void InternalSwap(InteractionRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "bestia.messages.interaction.InteractionRequest";
  }
  protected:
  explicit InteractionRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_messages_2finteraction_2eproto);
    return ::descriptor_table_messages_2finteraction_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kEntityIdFieldNumber = 1,
  };
  // int64 entity_id = 1;
  void clear_entity_id();
  ::PROTOBUF_NAMESPACE_ID::int64 entity_id() const;
  void set_entity_id(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_entity_id() const;
  void _internal_set_entity_id(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // @@protoc_insertion_point(class_scope:bestia.messages.interaction.InteractionRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::int64 entity_id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_messages_2finteraction_2eproto;
};
// -------------------------------------------------------------------

class InteractionResponse PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:bestia.messages.interaction.InteractionResponse) */ {
 public:
  inline InteractionResponse() : InteractionResponse(nullptr) {};
  virtual ~InteractionResponse();

  InteractionResponse(const InteractionResponse& from);
  InteractionResponse(InteractionResponse&& from) noexcept
    : InteractionResponse() {
    *this = ::std::move(from);
  }

  inline InteractionResponse& operator=(const InteractionResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline InteractionResponse& operator=(InteractionResponse&& from) noexcept {
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
  static const InteractionResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const InteractionResponse* internal_default_instance() {
    return reinterpret_cast<const InteractionResponse*>(
               &_InteractionResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(InteractionResponse& a, InteractionResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(InteractionResponse* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(InteractionResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline InteractionResponse* New() const final {
    return CreateMaybeMessage<InteractionResponse>(nullptr);
  }

  InteractionResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<InteractionResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const InteractionResponse& from);
  void MergeFrom(const InteractionResponse& from);
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
  void InternalSwap(InteractionResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "bestia.messages.interaction.InteractionResponse";
  }
  protected:
  explicit InteractionResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_messages_2finteraction_2eproto);
    return ::descriptor_table_messages_2finteraction_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kInteractionsFieldNumber = 2,
    kEntityIdFieldNumber = 1,
  };
  // repeated string interactions = 2;
  int interactions_size() const;
  private:
  int _internal_interactions_size() const;
  public:
  void clear_interactions();
  const std::string& interactions(int index) const;
  std::string* mutable_interactions(int index);
  void set_interactions(int index, const std::string& value);
  void set_interactions(int index, std::string&& value);
  void set_interactions(int index, const char* value);
  void set_interactions(int index, const char* value, size_t size);
  std::string* add_interactions();
  void add_interactions(const std::string& value);
  void add_interactions(std::string&& value);
  void add_interactions(const char* value);
  void add_interactions(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& interactions() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_interactions();
  private:
  const std::string& _internal_interactions(int index) const;
  std::string* _internal_add_interactions();
  public:

  // int64 entity_id = 1;
  void clear_entity_id();
  ::PROTOBUF_NAMESPACE_ID::int64 entity_id() const;
  void set_entity_id(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_entity_id() const;
  void _internal_set_entity_id(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // @@protoc_insertion_point(class_scope:bestia.messages.interaction.InteractionResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> interactions_;
  ::PROTOBUF_NAMESPACE_ID::int64 entity_id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_messages_2finteraction_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// InteractionRequest

// int64 entity_id = 1;
inline void InteractionRequest::clear_entity_id() {
  entity_id_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 InteractionRequest::_internal_entity_id() const {
  return entity_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 InteractionRequest::entity_id() const {
  // @@protoc_insertion_point(field_get:bestia.messages.interaction.InteractionRequest.entity_id)
  return _internal_entity_id();
}
inline void InteractionRequest::_internal_set_entity_id(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  entity_id_ = value;
}
inline void InteractionRequest::set_entity_id(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_entity_id(value);
  // @@protoc_insertion_point(field_set:bestia.messages.interaction.InteractionRequest.entity_id)
}

// -------------------------------------------------------------------

// InteractionResponse

// int64 entity_id = 1;
inline void InteractionResponse::clear_entity_id() {
  entity_id_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 InteractionResponse::_internal_entity_id() const {
  return entity_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 InteractionResponse::entity_id() const {
  // @@protoc_insertion_point(field_get:bestia.messages.interaction.InteractionResponse.entity_id)
  return _internal_entity_id();
}
inline void InteractionResponse::_internal_set_entity_id(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  entity_id_ = value;
}
inline void InteractionResponse::set_entity_id(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_entity_id(value);
  // @@protoc_insertion_point(field_set:bestia.messages.interaction.InteractionResponse.entity_id)
}

// repeated string interactions = 2;
inline int InteractionResponse::_internal_interactions_size() const {
  return interactions_.size();
}
inline int InteractionResponse::interactions_size() const {
  return _internal_interactions_size();
}
inline void InteractionResponse::clear_interactions() {
  interactions_.Clear();
}
inline std::string* InteractionResponse::add_interactions() {
  // @@protoc_insertion_point(field_add_mutable:bestia.messages.interaction.InteractionResponse.interactions)
  return _internal_add_interactions();
}
inline const std::string& InteractionResponse::_internal_interactions(int index) const {
  return interactions_.Get(index);
}
inline const std::string& InteractionResponse::interactions(int index) const {
  // @@protoc_insertion_point(field_get:bestia.messages.interaction.InteractionResponse.interactions)
  return _internal_interactions(index);
}
inline std::string* InteractionResponse::mutable_interactions(int index) {
  // @@protoc_insertion_point(field_mutable:bestia.messages.interaction.InteractionResponse.interactions)
  return interactions_.Mutable(index);
}
inline void InteractionResponse::set_interactions(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:bestia.messages.interaction.InteractionResponse.interactions)
  interactions_.Mutable(index)->assign(value);
}
inline void InteractionResponse::set_interactions(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:bestia.messages.interaction.InteractionResponse.interactions)
  interactions_.Mutable(index)->assign(std::move(value));
}
inline void InteractionResponse::set_interactions(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  interactions_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:bestia.messages.interaction.InteractionResponse.interactions)
}
inline void InteractionResponse::set_interactions(int index, const char* value, size_t size) {
  interactions_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:bestia.messages.interaction.InteractionResponse.interactions)
}
inline std::string* InteractionResponse::_internal_add_interactions() {
  return interactions_.Add();
}
inline void InteractionResponse::add_interactions(const std::string& value) {
  interactions_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:bestia.messages.interaction.InteractionResponse.interactions)
}
inline void InteractionResponse::add_interactions(std::string&& value) {
  interactions_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:bestia.messages.interaction.InteractionResponse.interactions)
}
inline void InteractionResponse::add_interactions(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  interactions_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:bestia.messages.interaction.InteractionResponse.interactions)
}
inline void InteractionResponse::add_interactions(const char* value, size_t size) {
  interactions_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:bestia.messages.interaction.InteractionResponse.interactions)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
InteractionResponse::interactions() const {
  // @@protoc_insertion_point(field_list:bestia.messages.interaction.InteractionResponse.interactions)
  return interactions_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
InteractionResponse::mutable_interactions() {
  // @@protoc_insertion_point(field_mutable_list:bestia.messages.interaction.InteractionResponse.interactions)
  return &interactions_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace interaction
}  // namespace messages
}  // namespace bestia

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_messages_2finteraction_2eproto
