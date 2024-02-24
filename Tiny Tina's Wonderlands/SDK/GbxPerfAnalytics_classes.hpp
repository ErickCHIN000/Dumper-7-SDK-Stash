#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class GbxPerfAnalytics.GbxTelemetryBlueprintLibrary
class UGbxTelemetryBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGbxTelemetryBlueprintLibrary* GetDefaultObj();

	struct FK2TelemetryValues SetNamedTelemetryVector(struct FK2TelemetryValues& StatArray, const class FString& Key, struct FVector& Value, enum class ESetTelemetryValue Opt);
	struct FK2TelemetryValues SetNamedTelemetryString(struct FK2TelemetryValues& StatArray, const class FString& Key, const class FString& Value, enum class ESetTelemetryValue Opt);
	struct FK2TelemetryValues SetNamedTelemetryRotator(struct FK2TelemetryValues& StatArray, const class FString& Key, struct FRotator& Value, enum class ESetTelemetryValue Opt);
	struct FK2TelemetryValues SetNamedTelemetryInt(struct FK2TelemetryValues& StatArray, const class FString& Key, int32 Value, enum class ESetTelemetryValue Opt);
	struct FK2TelemetryValues SetNamedTelemetryFloat(struct FK2TelemetryValues& StatArray, const class FString& Key, float Value, enum class ESetTelemetryValue Opt);
	struct FK2TelemetryValues SetNamedTelemetryByte(struct FK2TelemetryValues& StatArray, const class FString& Key, uint8 Value, enum class ESetTelemetryValue Opt);
	struct FK2TelemetryValues SetNamedTelemetryBool(struct FK2TelemetryValues& StatArray, const class FString& Key, bool Value, enum class ESetTelemetryValue Opt);
	struct FK2EventRef MakeTelemetryEventRef(const class FString& EventName);
	bool IsValid(struct FK2EventRef& EventRef);
	bool EmitTelemetryValues(const class FString& EventContext, struct FK2TelemetryValues& Values, class UObject* WorldContextObject, const struct FGuid& Guid, bool bRunOnClient);
	bool EmitTelemetryEvent(const struct FK2EventRef& Event, const class FString& EventContext, class UObject* EventContextObject, class UObject* EventInstigatorObject, class UObject* WorldContextObject, const struct FGuid& Guid, bool bRunOnClient);
	struct FK2EventRef DefineTelemetryEventRef(const class FString& EventName, const class FString& TableDesc);
};

}


