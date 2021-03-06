// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: messages/attack.proto

#include "messages/attack.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_messages_2fmodel_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Account_messages_2fmodel_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_messages_2fattack_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_LearnedAttack_messages_2fattack_2eproto;
namespace bestia {
namespace messages {
class AttackListRequestDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<AttackListRequest> _instance;
} _AttackListRequest_default_instance_;
class LearnedAttackDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<LearnedAttack> _instance;
} _LearnedAttack_default_instance_;
class LearnedAttacksDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<LearnedAttacks> _instance;
} _LearnedAttacks_default_instance_;
}  // namespace messages
}  // namespace bestia
static void InitDefaultsscc_info_AttackListRequest_messages_2fattack_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::bestia::messages::_AttackListRequest_default_instance_;
    new (ptr) ::bestia::messages::AttackListRequest();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::bestia::messages::AttackListRequest::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_AttackListRequest_messages_2fattack_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_AttackListRequest_messages_2fattack_2eproto}, {
      &scc_info_Account_messages_2fmodel_2eproto.base,}};

static void InitDefaultsscc_info_LearnedAttack_messages_2fattack_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::bestia::messages::_LearnedAttack_default_instance_;
    new (ptr) ::bestia::messages::LearnedAttack();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::bestia::messages::LearnedAttack::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_LearnedAttack_messages_2fattack_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_LearnedAttack_messages_2fattack_2eproto}, {}};

static void InitDefaultsscc_info_LearnedAttacks_messages_2fattack_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::bestia::messages::_LearnedAttacks_default_instance_;
    new (ptr) ::bestia::messages::LearnedAttacks();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::bestia::messages::LearnedAttacks::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_LearnedAttacks_messages_2fattack_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_LearnedAttacks_messages_2fattack_2eproto}, {
      &scc_info_LearnedAttack_messages_2fattack_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_messages_2fattack_2eproto[3];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_messages_2fattack_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_messages_2fattack_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_messages_2fattack_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::bestia::messages::AttackListRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::bestia::messages::AttackListRequest, account_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::bestia::messages::LearnedAttack, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::bestia::messages::LearnedAttack, attack_id_),
  PROTOBUF_FIELD_OFFSET(::bestia::messages::LearnedAttack, attack_db_name_),
  PROTOBUF_FIELD_OFFSET(::bestia::messages::LearnedAttack, min_level_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::bestia::messages::LearnedAttacks, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::bestia::messages::LearnedAttacks, player_bestia_id_),
  PROTOBUF_FIELD_OFFSET(::bestia::messages::LearnedAttacks, attacks_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::bestia::messages::AttackListRequest)},
  { 6, -1, sizeof(::bestia::messages::LearnedAttack)},
  { 14, -1, sizeof(::bestia::messages::LearnedAttacks)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::bestia::messages::_AttackListRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::bestia::messages::_LearnedAttack_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::bestia::messages::_LearnedAttacks_default_instance_),
};

const char descriptor_table_protodef_messages_2fattack_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\025messages/attack.proto\022\017bestia.messages"
  "\032\024messages/model.proto\">\n\021AttackListRequ"
  "est\022)\n\007account\030\001 \001(\0132\030.bestia.messages.A"
  "ccount\"M\n\rLearnedAttack\022\021\n\tattack_id\030\001 \001"
  "(\004\022\026\n\016attack_db_name\030\002 \001(\t\022\021\n\tmin_level\030"
  "\003 \001(\r\"[\n\016LearnedAttacks\022\030\n\020player_bestia"
  "_id\030\001 \001(\004\022/\n\007attacks\030\002 \003(\0132\036.bestia.mess"
  "ages.LearnedAttackB)\n\031net.bestia.message"
  "s.protoB\014AttackProtosb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_messages_2fattack_2eproto_deps[1] = {
  &::descriptor_table_messages_2fmodel_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_messages_2fattack_2eproto_sccs[3] = {
  &scc_info_AttackListRequest_messages_2fattack_2eproto.base,
  &scc_info_LearnedAttack_messages_2fattack_2eproto.base,
  &scc_info_LearnedAttacks_messages_2fattack_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_messages_2fattack_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_messages_2fattack_2eproto = {
  false, false, descriptor_table_protodef_messages_2fattack_2eproto, "messages/attack.proto", 349,
  &descriptor_table_messages_2fattack_2eproto_once, descriptor_table_messages_2fattack_2eproto_sccs, descriptor_table_messages_2fattack_2eproto_deps, 3, 1,
  schemas, file_default_instances, TableStruct_messages_2fattack_2eproto::offsets,
  file_level_metadata_messages_2fattack_2eproto, 3, file_level_enum_descriptors_messages_2fattack_2eproto, file_level_service_descriptors_messages_2fattack_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_messages_2fattack_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_messages_2fattack_2eproto)), true);
namespace bestia {
namespace messages {

// ===================================================================

void AttackListRequest::InitAsDefaultInstance() {
  ::bestia::messages::_AttackListRequest_default_instance_._instance.get_mutable()->account_ = const_cast< ::bestia::messages::Account*>(
      ::bestia::messages::Account::internal_default_instance());
}
class AttackListRequest::_Internal {
 public:
  static const ::bestia::messages::Account& account(const AttackListRequest* msg);
};

const ::bestia::messages::Account&
AttackListRequest::_Internal::account(const AttackListRequest* msg) {
  return *msg->account_;
}
void AttackListRequest::clear_account() {
  if (GetArena() == nullptr && account_ != nullptr) {
    delete account_;
  }
  account_ = nullptr;
}
AttackListRequest::AttackListRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:bestia.messages.AttackListRequest)
}
AttackListRequest::AttackListRequest(const AttackListRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_account()) {
    account_ = new ::bestia::messages::Account(*from.account_);
  } else {
    account_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:bestia.messages.AttackListRequest)
}

void AttackListRequest::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_AttackListRequest_messages_2fattack_2eproto.base);
  account_ = nullptr;
}

AttackListRequest::~AttackListRequest() {
  // @@protoc_insertion_point(destructor:bestia.messages.AttackListRequest)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void AttackListRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete account_;
}

void AttackListRequest::ArenaDtor(void* object) {
  AttackListRequest* _this = reinterpret_cast< AttackListRequest* >(object);
  (void)_this;
}
void AttackListRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void AttackListRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const AttackListRequest& AttackListRequest::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_AttackListRequest_messages_2fattack_2eproto.base);
  return *internal_default_instance();
}


void AttackListRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:bestia.messages.AttackListRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArena() == nullptr && account_ != nullptr) {
    delete account_;
  }
  account_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* AttackListRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .bestia.messages.Account account = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_account(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* AttackListRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:bestia.messages.AttackListRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .bestia.messages.Account account = 1;
  if (this->has_account()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::account(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:bestia.messages.AttackListRequest)
  return target;
}

size_t AttackListRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:bestia.messages.AttackListRequest)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .bestia.messages.Account account = 1;
  if (this->has_account()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *account_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void AttackListRequest::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:bestia.messages.AttackListRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const AttackListRequest* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<AttackListRequest>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:bestia.messages.AttackListRequest)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:bestia.messages.AttackListRequest)
    MergeFrom(*source);
  }
}

void AttackListRequest::MergeFrom(const AttackListRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:bestia.messages.AttackListRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_account()) {
    _internal_mutable_account()->::bestia::messages::Account::MergeFrom(from._internal_account());
  }
}

void AttackListRequest::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:bestia.messages.AttackListRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AttackListRequest::CopyFrom(const AttackListRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:bestia.messages.AttackListRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AttackListRequest::IsInitialized() const {
  return true;
}

void AttackListRequest::InternalSwap(AttackListRequest* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(account_, other->account_);
}

::PROTOBUF_NAMESPACE_ID::Metadata AttackListRequest::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void LearnedAttack::InitAsDefaultInstance() {
}
class LearnedAttack::_Internal {
 public:
};

LearnedAttack::LearnedAttack(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:bestia.messages.LearnedAttack)
}
LearnedAttack::LearnedAttack(const LearnedAttack& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  attack_db_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_attack_db_name().empty()) {
    attack_db_name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_attack_db_name(),
      GetArena());
  }
  ::memcpy(&attack_id_, &from.attack_id_,
    static_cast<size_t>(reinterpret_cast<char*>(&min_level_) -
    reinterpret_cast<char*>(&attack_id_)) + sizeof(min_level_));
  // @@protoc_insertion_point(copy_constructor:bestia.messages.LearnedAttack)
}

void LearnedAttack::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_LearnedAttack_messages_2fattack_2eproto.base);
  attack_db_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&attack_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&min_level_) -
      reinterpret_cast<char*>(&attack_id_)) + sizeof(min_level_));
}

LearnedAttack::~LearnedAttack() {
  // @@protoc_insertion_point(destructor:bestia.messages.LearnedAttack)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void LearnedAttack::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  attack_db_name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void LearnedAttack::ArenaDtor(void* object) {
  LearnedAttack* _this = reinterpret_cast< LearnedAttack* >(object);
  (void)_this;
}
void LearnedAttack::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void LearnedAttack::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const LearnedAttack& LearnedAttack::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_LearnedAttack_messages_2fattack_2eproto.base);
  return *internal_default_instance();
}


void LearnedAttack::Clear() {
// @@protoc_insertion_point(message_clear_start:bestia.messages.LearnedAttack)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  attack_db_name_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::memset(&attack_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&min_level_) -
      reinterpret_cast<char*>(&attack_id_)) + sizeof(min_level_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* LearnedAttack::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // uint64 attack_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          attack_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string attack_db_name = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_attack_db_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "bestia.messages.LearnedAttack.attack_db_name"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 min_level = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          min_level_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* LearnedAttack::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:bestia.messages.LearnedAttack)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 attack_id = 1;
  if (this->attack_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(1, this->_internal_attack_id(), target);
  }

  // string attack_db_name = 2;
  if (this->attack_db_name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_attack_db_name().data(), static_cast<int>(this->_internal_attack_db_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "bestia.messages.LearnedAttack.attack_db_name");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_attack_db_name(), target);
  }

  // uint32 min_level = 3;
  if (this->min_level() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(3, this->_internal_min_level(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:bestia.messages.LearnedAttack)
  return target;
}

size_t LearnedAttack::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:bestia.messages.LearnedAttack)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string attack_db_name = 2;
  if (this->attack_db_name().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_attack_db_name());
  }

  // uint64 attack_id = 1;
  if (this->attack_id() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->_internal_attack_id());
  }

  // uint32 min_level = 3;
  if (this->min_level() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_min_level());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void LearnedAttack::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:bestia.messages.LearnedAttack)
  GOOGLE_DCHECK_NE(&from, this);
  const LearnedAttack* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<LearnedAttack>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:bestia.messages.LearnedAttack)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:bestia.messages.LearnedAttack)
    MergeFrom(*source);
  }
}

void LearnedAttack::MergeFrom(const LearnedAttack& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:bestia.messages.LearnedAttack)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.attack_db_name().size() > 0) {
    _internal_set_attack_db_name(from._internal_attack_db_name());
  }
  if (from.attack_id() != 0) {
    _internal_set_attack_id(from._internal_attack_id());
  }
  if (from.min_level() != 0) {
    _internal_set_min_level(from._internal_min_level());
  }
}

void LearnedAttack::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:bestia.messages.LearnedAttack)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LearnedAttack::CopyFrom(const LearnedAttack& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:bestia.messages.LearnedAttack)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LearnedAttack::IsInitialized() const {
  return true;
}

void LearnedAttack::InternalSwap(LearnedAttack* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  attack_db_name_.Swap(&other->attack_db_name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(LearnedAttack, min_level_)
      + sizeof(LearnedAttack::min_level_)
      - PROTOBUF_FIELD_OFFSET(LearnedAttack, attack_id_)>(
          reinterpret_cast<char*>(&attack_id_),
          reinterpret_cast<char*>(&other->attack_id_));
}

::PROTOBUF_NAMESPACE_ID::Metadata LearnedAttack::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void LearnedAttacks::InitAsDefaultInstance() {
}
class LearnedAttacks::_Internal {
 public:
};

LearnedAttacks::LearnedAttacks(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  attacks_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:bestia.messages.LearnedAttacks)
}
LearnedAttacks::LearnedAttacks(const LearnedAttacks& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      attacks_(from.attacks_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  player_bestia_id_ = from.player_bestia_id_;
  // @@protoc_insertion_point(copy_constructor:bestia.messages.LearnedAttacks)
}

void LearnedAttacks::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_LearnedAttacks_messages_2fattack_2eproto.base);
  player_bestia_id_ = PROTOBUF_ULONGLONG(0);
}

LearnedAttacks::~LearnedAttacks() {
  // @@protoc_insertion_point(destructor:bestia.messages.LearnedAttacks)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void LearnedAttacks::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void LearnedAttacks::ArenaDtor(void* object) {
  LearnedAttacks* _this = reinterpret_cast< LearnedAttacks* >(object);
  (void)_this;
}
void LearnedAttacks::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void LearnedAttacks::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const LearnedAttacks& LearnedAttacks::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_LearnedAttacks_messages_2fattack_2eproto.base);
  return *internal_default_instance();
}


void LearnedAttacks::Clear() {
// @@protoc_insertion_point(message_clear_start:bestia.messages.LearnedAttacks)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  attacks_.Clear();
  player_bestia_id_ = PROTOBUF_ULONGLONG(0);
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* LearnedAttacks::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // uint64 player_bestia_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          player_bestia_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .bestia.messages.LearnedAttack attacks = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_attacks(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* LearnedAttacks::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:bestia.messages.LearnedAttacks)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 player_bestia_id = 1;
  if (this->player_bestia_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(1, this->_internal_player_bestia_id(), target);
  }

  // repeated .bestia.messages.LearnedAttack attacks = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_attacks_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, this->_internal_attacks(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:bestia.messages.LearnedAttacks)
  return target;
}

size_t LearnedAttacks::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:bestia.messages.LearnedAttacks)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .bestia.messages.LearnedAttack attacks = 2;
  total_size += 1UL * this->_internal_attacks_size();
  for (const auto& msg : this->attacks_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // uint64 player_bestia_id = 1;
  if (this->player_bestia_id() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->_internal_player_bestia_id());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void LearnedAttacks::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:bestia.messages.LearnedAttacks)
  GOOGLE_DCHECK_NE(&from, this);
  const LearnedAttacks* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<LearnedAttacks>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:bestia.messages.LearnedAttacks)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:bestia.messages.LearnedAttacks)
    MergeFrom(*source);
  }
}

void LearnedAttacks::MergeFrom(const LearnedAttacks& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:bestia.messages.LearnedAttacks)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  attacks_.MergeFrom(from.attacks_);
  if (from.player_bestia_id() != 0) {
    _internal_set_player_bestia_id(from._internal_player_bestia_id());
  }
}

void LearnedAttacks::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:bestia.messages.LearnedAttacks)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LearnedAttacks::CopyFrom(const LearnedAttacks& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:bestia.messages.LearnedAttacks)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LearnedAttacks::IsInitialized() const {
  return true;
}

void LearnedAttacks::InternalSwap(LearnedAttacks* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  attacks_.InternalSwap(&other->attacks_);
  swap(player_bestia_id_, other->player_bestia_id_);
}

::PROTOBUF_NAMESPACE_ID::Metadata LearnedAttacks::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace messages
}  // namespace bestia
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::bestia::messages::AttackListRequest* Arena::CreateMaybeMessage< ::bestia::messages::AttackListRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::bestia::messages::AttackListRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::bestia::messages::LearnedAttack* Arena::CreateMaybeMessage< ::bestia::messages::LearnedAttack >(Arena* arena) {
  return Arena::CreateMessageInternal< ::bestia::messages::LearnedAttack >(arena);
}
template<> PROTOBUF_NOINLINE ::bestia::messages::LearnedAttacks* Arena::CreateMaybeMessage< ::bestia::messages::LearnedAttacks >(Arena* arena) {
  return Arena::CreateMessageInternal< ::bestia::messages::LearnedAttacks >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
