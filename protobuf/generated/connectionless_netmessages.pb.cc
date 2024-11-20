// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: connectionless_netmessages.proto

#include "connectionless_netmessages.pb.h"

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

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

PROTOBUF_CONSTEXPR C2S_CONNECT_Message::C2S_CONNECT_Message(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.splitplayers_)*/{}
  , /*decltype(_impl_.encrypted_password_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.auth_steam_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.challenge_context_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.host_version_)*/0u
  , /*decltype(_impl_.auth_protocol_)*/0u
  , /*decltype(_impl_.reservation_cookie_)*/uint64_t{0u}
  , /*decltype(_impl_.challenge_number_)*/0u
  , /*decltype(_impl_.low_violence_)*/false} {}
struct C2S_CONNECT_MessageDefaultTypeInternal {
  PROTOBUF_CONSTEXPR C2S_CONNECT_MessageDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~C2S_CONNECT_MessageDefaultTypeInternal() {}
  union {
    C2S_CONNECT_Message _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 C2S_CONNECT_MessageDefaultTypeInternal _C2S_CONNECT_Message_default_instance_;
PROTOBUF_CONSTEXPR C2S_CONNECTION_Message::C2S_CONNECTION_Message(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.addon_name_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}} {}
struct C2S_CONNECTION_MessageDefaultTypeInternal {
  PROTOBUF_CONSTEXPR C2S_CONNECTION_MessageDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~C2S_CONNECTION_MessageDefaultTypeInternal() {}
  union {
    C2S_CONNECTION_Message _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 C2S_CONNECTION_MessageDefaultTypeInternal _C2S_CONNECTION_Message_default_instance_;
static ::_pb::Metadata file_level_metadata_connectionless_5fnetmessages_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_connectionless_5fnetmessages_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_connectionless_5fnetmessages_2eproto = nullptr;

const uint32_t TableStruct_connectionless_5fnetmessages_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::C2S_CONNECT_Message, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::C2S_CONNECT_Message, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::C2S_CONNECT_Message, _impl_.host_version_),
  PROTOBUF_FIELD_OFFSET(::C2S_CONNECT_Message, _impl_.auth_protocol_),
  PROTOBUF_FIELD_OFFSET(::C2S_CONNECT_Message, _impl_.challenge_number_),
  PROTOBUF_FIELD_OFFSET(::C2S_CONNECT_Message, _impl_.reservation_cookie_),
  PROTOBUF_FIELD_OFFSET(::C2S_CONNECT_Message, _impl_.low_violence_),
  PROTOBUF_FIELD_OFFSET(::C2S_CONNECT_Message, _impl_.encrypted_password_),
  PROTOBUF_FIELD_OFFSET(::C2S_CONNECT_Message, _impl_.splitplayers_),
  PROTOBUF_FIELD_OFFSET(::C2S_CONNECT_Message, _impl_.auth_steam_),
  PROTOBUF_FIELD_OFFSET(::C2S_CONNECT_Message, _impl_.challenge_context_),
  3,
  4,
  6,
  5,
  7,
  0,
  ~0u,
  1,
  2,
  PROTOBUF_FIELD_OFFSET(::C2S_CONNECTION_Message, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::C2S_CONNECTION_Message, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::C2S_CONNECTION_Message, _impl_.addon_name_),
  0,
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 15, -1, sizeof(::C2S_CONNECT_Message)},
  { 24, 31, -1, sizeof(::C2S_CONNECTION_Message)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::_C2S_CONNECT_Message_default_instance_._instance,
  &::_C2S_CONNECTION_Message_default_instance_._instance,
};

const char descriptor_table_protodef_connectionless_5fnetmessages_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n connectionless_netmessages.proto\032\021netm"
  "essages.proto\"\214\002\n\023C2S_CONNECT_Message\022\024\n"
  "\014host_version\030\001 \001(\r\022\025\n\rauth_protocol\030\002 \001"
  "(\r\022\030\n\020challenge_number\030\003 \001(\r\022\032\n\022reservat"
  "ion_cookie\030\004 \001(\006\022\024\n\014low_violence\030\005 \001(\010\022\032"
  "\n\022encrypted_password\030\006 \001(\014\0221\n\014splitplaye"
  "rs\030\007 \003(\0132\033.CCLCMsg_SplitPlayerConnect\022\022\n"
  "\nauth_steam\030\010 \001(\014\022\031\n\021challenge_context\030\t"
  " \001(\t\",\n\026C2S_CONNECTION_Message\022\022\n\naddon_"
  "name\030\001 \001(\t"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_connectionless_5fnetmessages_2eproto_deps[1] = {
  &::descriptor_table_netmessages_2eproto,
};
static ::_pbi::once_flag descriptor_table_connectionless_5fnetmessages_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_connectionless_5fnetmessages_2eproto = {
    false, false, 370, descriptor_table_protodef_connectionless_5fnetmessages_2eproto,
    "connectionless_netmessages.proto",
    &descriptor_table_connectionless_5fnetmessages_2eproto_once, descriptor_table_connectionless_5fnetmessages_2eproto_deps, 1, 2,
    schemas, file_default_instances, TableStruct_connectionless_5fnetmessages_2eproto::offsets,
    file_level_metadata_connectionless_5fnetmessages_2eproto, file_level_enum_descriptors_connectionless_5fnetmessages_2eproto,
    file_level_service_descriptors_connectionless_5fnetmessages_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_connectionless_5fnetmessages_2eproto_getter() {
  return &descriptor_table_connectionless_5fnetmessages_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_connectionless_5fnetmessages_2eproto(&descriptor_table_connectionless_5fnetmessages_2eproto);

// ===================================================================

class C2S_CONNECT_Message::_Internal {
 public:
  using HasBits = decltype(std::declval<C2S_CONNECT_Message>()._impl_._has_bits_);
  static void set_has_host_version(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_auth_protocol(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_challenge_number(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static void set_has_reservation_cookie(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_low_violence(HasBits* has_bits) {
    (*has_bits)[0] |= 128u;
  }
  static void set_has_encrypted_password(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_auth_steam(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_challenge_context(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
};

void C2S_CONNECT_Message::clear_splitplayers() {
  _impl_.splitplayers_.Clear();
}
C2S_CONNECT_Message::C2S_CONNECT_Message(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:C2S_CONNECT_Message)
}
C2S_CONNECT_Message::C2S_CONNECT_Message(const C2S_CONNECT_Message& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  C2S_CONNECT_Message* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.splitplayers_){from._impl_.splitplayers_}
    , decltype(_impl_.encrypted_password_){}
    , decltype(_impl_.auth_steam_){}
    , decltype(_impl_.challenge_context_){}
    , decltype(_impl_.host_version_){}
    , decltype(_impl_.auth_protocol_){}
    , decltype(_impl_.reservation_cookie_){}
    , decltype(_impl_.challenge_number_){}
    , decltype(_impl_.low_violence_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.encrypted_password_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.encrypted_password_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_encrypted_password()) {
    _this->_impl_.encrypted_password_.Set(from._internal_encrypted_password(), 
      _this->GetArenaForAllocation());
  }
  _impl_.auth_steam_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.auth_steam_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_auth_steam()) {
    _this->_impl_.auth_steam_.Set(from._internal_auth_steam(), 
      _this->GetArenaForAllocation());
  }
  _impl_.challenge_context_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.challenge_context_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_challenge_context()) {
    _this->_impl_.challenge_context_.Set(from._internal_challenge_context(), 
      _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.host_version_, &from._impl_.host_version_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.low_violence_) -
    reinterpret_cast<char*>(&_impl_.host_version_)) + sizeof(_impl_.low_violence_));
  // @@protoc_insertion_point(copy_constructor:C2S_CONNECT_Message)
}

inline void C2S_CONNECT_Message::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.splitplayers_){arena}
    , decltype(_impl_.encrypted_password_){}
    , decltype(_impl_.auth_steam_){}
    , decltype(_impl_.challenge_context_){}
    , decltype(_impl_.host_version_){0u}
    , decltype(_impl_.auth_protocol_){0u}
    , decltype(_impl_.reservation_cookie_){uint64_t{0u}}
    , decltype(_impl_.challenge_number_){0u}
    , decltype(_impl_.low_violence_){false}
  };
  _impl_.encrypted_password_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.encrypted_password_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.auth_steam_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.auth_steam_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.challenge_context_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.challenge_context_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

C2S_CONNECT_Message::~C2S_CONNECT_Message() {
  // @@protoc_insertion_point(destructor:C2S_CONNECT_Message)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void C2S_CONNECT_Message::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.splitplayers_.~RepeatedPtrField();
  _impl_.encrypted_password_.Destroy();
  _impl_.auth_steam_.Destroy();
  _impl_.challenge_context_.Destroy();
}

void C2S_CONNECT_Message::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void C2S_CONNECT_Message::Clear() {
// @@protoc_insertion_point(message_clear_start:C2S_CONNECT_Message)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.splitplayers_.Clear();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _impl_.encrypted_password_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      _impl_.auth_steam_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000004u) {
      _impl_.challenge_context_.ClearNonDefaultToEmpty();
    }
  }
  if (cached_has_bits & 0x000000f8u) {
    ::memset(&_impl_.host_version_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&_impl_.low_violence_) -
        reinterpret_cast<char*>(&_impl_.host_version_)) + sizeof(_impl_.low_violence_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* C2S_CONNECT_Message::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional uint32 host_version = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_host_version(&has_bits);
          _impl_.host_version_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 auth_protocol = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_auth_protocol(&has_bits);
          _impl_.auth_protocol_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 challenge_number = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_challenge_number(&has_bits);
          _impl_.challenge_number_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional fixed64 reservation_cookie = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 33)) {
          _Internal::set_has_reservation_cookie(&has_bits);
          _impl_.reservation_cookie_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<uint64_t>(ptr);
          ptr += sizeof(uint64_t);
        } else
          goto handle_unusual;
        continue;
      // optional bool low_violence = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          _Internal::set_has_low_violence(&has_bits);
          _impl_.low_violence_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bytes encrypted_password = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 50)) {
          auto str = _internal_mutable_encrypted_password();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated .CCLCMsg_SplitPlayerConnect splitplayers = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 58)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_splitplayers(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<58>(ptr));
        } else
          goto handle_unusual;
        continue;
      // optional bytes auth_steam = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 66)) {
          auto str = _internal_mutable_auth_steam();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string challenge_context = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 74)) {
          auto str = _internal_mutable_challenge_context();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "C2S_CONNECT_Message.challenge_context");
          #endif  // !NDEBUG
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* C2S_CONNECT_Message::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:C2S_CONNECT_Message)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional uint32 host_version = 1;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(1, this->_internal_host_version(), target);
  }

  // optional uint32 auth_protocol = 2;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(2, this->_internal_auth_protocol(), target);
  }

  // optional uint32 challenge_number = 3;
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(3, this->_internal_challenge_number(), target);
  }

  // optional fixed64 reservation_cookie = 4;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFixed64ToArray(4, this->_internal_reservation_cookie(), target);
  }

  // optional bool low_violence = 5;
  if (cached_has_bits & 0x00000080u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(5, this->_internal_low_violence(), target);
  }

  // optional bytes encrypted_password = 6;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteBytesMaybeAliased(
        6, this->_internal_encrypted_password(), target);
  }

  // repeated .CCLCMsg_SplitPlayerConnect splitplayers = 7;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_splitplayers_size()); i < n; i++) {
    const auto& repfield = this->_internal_splitplayers(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(7, repfield, repfield.GetCachedSize(), target, stream);
  }

  // optional bytes auth_steam = 8;
  if (cached_has_bits & 0x00000002u) {
    target = stream->WriteBytesMaybeAliased(
        8, this->_internal_auth_steam(), target);
  }

  // optional string challenge_context = 9;
  if (cached_has_bits & 0x00000004u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_challenge_context().data(), static_cast<int>(this->_internal_challenge_context().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "C2S_CONNECT_Message.challenge_context");
    target = stream->WriteStringMaybeAliased(
        9, this->_internal_challenge_context(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:C2S_CONNECT_Message)
  return target;
}

size_t C2S_CONNECT_Message::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:C2S_CONNECT_Message)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .CCLCMsg_SplitPlayerConnect splitplayers = 7;
  total_size += 1UL * this->_internal_splitplayers_size();
  for (const auto& msg : this->_impl_.splitplayers_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    // optional bytes encrypted_password = 6;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
          this->_internal_encrypted_password());
    }

    // optional bytes auth_steam = 8;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
          this->_internal_auth_steam());
    }

    // optional string challenge_context = 9;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_challenge_context());
    }

    // optional uint32 host_version = 1;
    if (cached_has_bits & 0x00000008u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_host_version());
    }

    // optional uint32 auth_protocol = 2;
    if (cached_has_bits & 0x00000010u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_auth_protocol());
    }

    // optional fixed64 reservation_cookie = 4;
    if (cached_has_bits & 0x00000020u) {
      total_size += 1 + 8;
    }

    // optional uint32 challenge_number = 3;
    if (cached_has_bits & 0x00000040u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_challenge_number());
    }

    // optional bool low_violence = 5;
    if (cached_has_bits & 0x00000080u) {
      total_size += 1 + 1;
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData C2S_CONNECT_Message::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    C2S_CONNECT_Message::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*C2S_CONNECT_Message::GetClassData() const { return &_class_data_; }


void C2S_CONNECT_Message::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<C2S_CONNECT_Message*>(&to_msg);
  auto& from = static_cast<const C2S_CONNECT_Message&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:C2S_CONNECT_Message)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.splitplayers_.MergeFrom(from._impl_.splitplayers_);
  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_encrypted_password(from._internal_encrypted_password());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_set_auth_steam(from._internal_auth_steam());
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_internal_set_challenge_context(from._internal_challenge_context());
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_impl_.host_version_ = from._impl_.host_version_;
    }
    if (cached_has_bits & 0x00000010u) {
      _this->_impl_.auth_protocol_ = from._impl_.auth_protocol_;
    }
    if (cached_has_bits & 0x00000020u) {
      _this->_impl_.reservation_cookie_ = from._impl_.reservation_cookie_;
    }
    if (cached_has_bits & 0x00000040u) {
      _this->_impl_.challenge_number_ = from._impl_.challenge_number_;
    }
    if (cached_has_bits & 0x00000080u) {
      _this->_impl_.low_violence_ = from._impl_.low_violence_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void C2S_CONNECT_Message::CopyFrom(const C2S_CONNECT_Message& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:C2S_CONNECT_Message)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool C2S_CONNECT_Message::IsInitialized() const {
  return true;
}

void C2S_CONNECT_Message::InternalSwap(C2S_CONNECT_Message* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  _impl_.splitplayers_.InternalSwap(&other->_impl_.splitplayers_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.encrypted_password_, lhs_arena,
      &other->_impl_.encrypted_password_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.auth_steam_, lhs_arena,
      &other->_impl_.auth_steam_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.challenge_context_, lhs_arena,
      &other->_impl_.challenge_context_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(C2S_CONNECT_Message, _impl_.low_violence_)
      + sizeof(C2S_CONNECT_Message::_impl_.low_violence_)
      - PROTOBUF_FIELD_OFFSET(C2S_CONNECT_Message, _impl_.host_version_)>(
          reinterpret_cast<char*>(&_impl_.host_version_),
          reinterpret_cast<char*>(&other->_impl_.host_version_));
}

::PROTOBUF_NAMESPACE_ID::Metadata C2S_CONNECT_Message::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_connectionless_5fnetmessages_2eproto_getter, &descriptor_table_connectionless_5fnetmessages_2eproto_once,
      file_level_metadata_connectionless_5fnetmessages_2eproto[0]);
}

// ===================================================================

class C2S_CONNECTION_Message::_Internal {
 public:
  using HasBits = decltype(std::declval<C2S_CONNECTION_Message>()._impl_._has_bits_);
  static void set_has_addon_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

C2S_CONNECTION_Message::C2S_CONNECTION_Message(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:C2S_CONNECTION_Message)
}
C2S_CONNECTION_Message::C2S_CONNECTION_Message(const C2S_CONNECTION_Message& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  C2S_CONNECTION_Message* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.addon_name_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.addon_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.addon_name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_addon_name()) {
    _this->_impl_.addon_name_.Set(from._internal_addon_name(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:C2S_CONNECTION_Message)
}

inline void C2S_CONNECTION_Message::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.addon_name_){}
  };
  _impl_.addon_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.addon_name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

C2S_CONNECTION_Message::~C2S_CONNECTION_Message() {
  // @@protoc_insertion_point(destructor:C2S_CONNECTION_Message)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void C2S_CONNECTION_Message::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.addon_name_.Destroy();
}

void C2S_CONNECTION_Message::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void C2S_CONNECTION_Message::Clear() {
// @@protoc_insertion_point(message_clear_start:C2S_CONNECTION_Message)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    _impl_.addon_name_.ClearNonDefaultToEmpty();
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* C2S_CONNECTION_Message::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string addon_name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_addon_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "C2S_CONNECTION_Message.addon_name");
          #endif  // !NDEBUG
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* C2S_CONNECTION_Message::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:C2S_CONNECTION_Message)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional string addon_name = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_addon_name().data(), static_cast<int>(this->_internal_addon_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "C2S_CONNECTION_Message.addon_name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_addon_name(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:C2S_CONNECTION_Message)
  return target;
}

size_t C2S_CONNECTION_Message::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:C2S_CONNECTION_Message)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional string addon_name = 1;
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_addon_name());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData C2S_CONNECTION_Message::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    C2S_CONNECTION_Message::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*C2S_CONNECTION_Message::GetClassData() const { return &_class_data_; }


void C2S_CONNECTION_Message::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<C2S_CONNECTION_Message*>(&to_msg);
  auto& from = static_cast<const C2S_CONNECTION_Message&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:C2S_CONNECTION_Message)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_addon_name()) {
    _this->_internal_set_addon_name(from._internal_addon_name());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void C2S_CONNECTION_Message::CopyFrom(const C2S_CONNECTION_Message& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:C2S_CONNECTION_Message)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool C2S_CONNECTION_Message::IsInitialized() const {
  return true;
}

void C2S_CONNECTION_Message::InternalSwap(C2S_CONNECTION_Message* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.addon_name_, lhs_arena,
      &other->_impl_.addon_name_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata C2S_CONNECTION_Message::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_connectionless_5fnetmessages_2eproto_getter, &descriptor_table_connectionless_5fnetmessages_2eproto_once,
      file_level_metadata_connectionless_5fnetmessages_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::C2S_CONNECT_Message*
Arena::CreateMaybeMessage< ::C2S_CONNECT_Message >(Arena* arena) {
  return Arena::CreateMessageInternal< ::C2S_CONNECT_Message >(arena);
}
template<> PROTOBUF_NOINLINE ::C2S_CONNECTION_Message*
Arena::CreateMaybeMessage< ::C2S_CONNECTION_Message >(Arena* arena) {
  return Arena::CreateMessageInternal< ::C2S_CONNECTION_Message >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
