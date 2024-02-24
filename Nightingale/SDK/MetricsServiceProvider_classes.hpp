#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class MetricsServiceProvider.MetricsAdditionalTelemetryAttributes
class IMetricsAdditionalTelemetryAttributes : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMetricsAdditionalTelemetryAttributes* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MetricsServiceProvider.MetricsBlueprintLibrary
class UMetricsBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMetricsBlueprintLibrary* GetDefaultObj();

	void TelemetryLoginReportClientAppearance(const class FString& ProfileId, const class FString& Appearance, TMap<class FString, class FString>& AppearanceOptions);
	void TelemetryEventWithAttributes(enum class EMetricsClass EventClass, const class FString& EventName, TArray<struct FMetricsEventAttr>& Attributes);
	void TelemetryEventForPlayerWithAttributes(class UObject* WorldContextObject, enum class EMetricsClass EventClass, const class FString& EventName, class APlayerState* PlayerState, TArray<struct FMetricsEventAttr>& Attributes, bool OverrideClientGuard);
	void TelemetryEventForPlayer(class UObject* WorldContextObject, enum class EMetricsClass EventClass, const class FString& EventName, class APlayerState* PlayerState);
	void TelemetryEvent(enum class EMetricsClass EventClass, const class FString& EventName);
};

// 0x0 (0x28 - 0x28)
// Class MetricsServiceProvider.MetricsPlayerTimeAttributes
class IMetricsPlayerTimeAttributes : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMetricsPlayerTimeAttributes* GetDefaultObj();

};

// 0x10 (0xB0 - 0xA0)
// Class MetricsServiceProvider.TelemetryAssertionComponent
class UTelemetryAssertionComponent : public UActorComponent
{
public:
	TArray<struct FTelemetryEventDescriptor>     ExpectedTelemetry;                                 // 0xA0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UTelemetryAssertionComponent* GetDefaultObj();

	void AddExpectedTelemetryEvent(enum class EMetricsClass MetricsClass, const class FString& EventName, TArray<struct FMetricsEventAttr>& Attributes);
};

}


