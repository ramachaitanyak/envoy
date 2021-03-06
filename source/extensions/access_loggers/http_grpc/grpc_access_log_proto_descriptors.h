#pragma once

namespace Envoy {
namespace Extensions {
namespace AccessLoggers {
namespace HttpGrpc {

// This function validates that the method descriptors for gRPC services and type descriptors that
// are referenced in Any messages are available in the descriptor pool.
bool validateProtoDescriptors();
} // namespace HttpGrpc
} // namespace AccessLoggers
} // namespace Extensions
} // namespace Envoy
