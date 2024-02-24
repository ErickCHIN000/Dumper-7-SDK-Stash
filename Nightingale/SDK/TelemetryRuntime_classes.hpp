#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class TelemetryRuntime.TelemetrySerializationInterface
class ITelemetrySerializationInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITelemetrySerializationInterface* GetDefaultObj();

	bool GetTelemetryAttribute_PositionVector(struct FVector* OutPositionVector);
	bool GetTelemetryAttribute_ObjectUniqueId(class FString* OutUniqueID);
	void GetTelemetryAttribute_ObjectType(class FString* OutObjectType);
	bool GetTelemetryAttribute_ObjectName(class FString* OutObjectName);
};

}


