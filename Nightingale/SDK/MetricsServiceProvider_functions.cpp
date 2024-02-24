#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MetricsServiceProvider.MetricsAdditionalTelemetryAttributes
// (None)

class UClass* IMetricsAdditionalTelemetryAttributes::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MetricsAdditionalTelemetryAttributes");

	return Clss;
}


// MetricsAdditionalTelemetryAttributes MetricsServiceProvider.Default__MetricsAdditionalTelemetryAttributes
// (Public, ClassDefaultObject, ArchetypeObject)

class IMetricsAdditionalTelemetryAttributes* IMetricsAdditionalTelemetryAttributes::GetDefaultObj()
{
	static class IMetricsAdditionalTelemetryAttributes* Default = nullptr;

	if (!Default)
		Default = static_cast<IMetricsAdditionalTelemetryAttributes*>(IMetricsAdditionalTelemetryAttributes::StaticClass()->DefaultObject);

	return Default;
}


// Class MetricsServiceProvider.MetricsBlueprintLibrary
// (None)

class UClass* UMetricsBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MetricsBlueprintLibrary");

	return Clss;
}


// MetricsBlueprintLibrary MetricsServiceProvider.Default__MetricsBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UMetricsBlueprintLibrary* UMetricsBlueprintLibrary::GetDefaultObj()
{
	static class UMetricsBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UMetricsBlueprintLibrary*>(UMetricsBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function MetricsServiceProvider.MetricsBlueprintLibrary.TelemetryLoginReportClientAppearance
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      ProfileId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Appearance                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FString, class FString> AppearanceOptions                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UMetricsBlueprintLibrary::TelemetryLoginReportClientAppearance(const class FString& ProfileId, const class FString& Appearance, TMap<class FString, class FString>& AppearanceOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetricsBlueprintLibrary", "TelemetryLoginReportClientAppearance");

	Params::UMetricsBlueprintLibrary_TelemetryLoginReportClientAppearance_Params Parms{};

	Parms.ProfileId = ProfileId;
	Parms.Appearance = Appearance;
	Parms.AppearanceOptions = AppearanceOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MetricsServiceProvider.MetricsBlueprintLibrary.TelemetryEventWithAttributes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EMetricsClass           EventClass                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FMetricsEventAttr>   Attributes                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UMetricsBlueprintLibrary::TelemetryEventWithAttributes(enum class EMetricsClass EventClass, const class FString& EventName, TArray<struct FMetricsEventAttr>& Attributes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetricsBlueprintLibrary", "TelemetryEventWithAttributes");

	Params::UMetricsBlueprintLibrary_TelemetryEventWithAttributes_Params Parms{};

	Parms.EventClass = EventClass;
	Parms.EventName = EventName;
	Parms.Attributes = Attributes;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MetricsServiceProvider.MetricsBlueprintLibrary.TelemetryEventForPlayerWithAttributes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMetricsClass           EventClass                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerState*                PlayerState                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FMetricsEventAttr>   Attributes                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               OverrideClientGuard                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMetricsBlueprintLibrary::TelemetryEventForPlayerWithAttributes(class UObject* WorldContextObject, enum class EMetricsClass EventClass, const class FString& EventName, class APlayerState* PlayerState, TArray<struct FMetricsEventAttr>& Attributes, bool OverrideClientGuard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetricsBlueprintLibrary", "TelemetryEventForPlayerWithAttributes");

	Params::UMetricsBlueprintLibrary_TelemetryEventForPlayerWithAttributes_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.EventClass = EventClass;
	Parms.EventName = EventName;
	Parms.PlayerState = PlayerState;
	Parms.Attributes = Attributes;
	Parms.OverrideClientGuard = OverrideClientGuard;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MetricsServiceProvider.MetricsBlueprintLibrary.TelemetryEventForPlayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMetricsClass           EventClass                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerState*                PlayerState                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMetricsBlueprintLibrary::TelemetryEventForPlayer(class UObject* WorldContextObject, enum class EMetricsClass EventClass, const class FString& EventName, class APlayerState* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetricsBlueprintLibrary", "TelemetryEventForPlayer");

	Params::UMetricsBlueprintLibrary_TelemetryEventForPlayer_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.EventClass = EventClass;
	Parms.EventName = EventName;
	Parms.PlayerState = PlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MetricsServiceProvider.MetricsBlueprintLibrary.TelemetryEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EMetricsClass           EventClass                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMetricsBlueprintLibrary::TelemetryEvent(enum class EMetricsClass EventClass, const class FString& EventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetricsBlueprintLibrary", "TelemetryEvent");

	Params::UMetricsBlueprintLibrary_TelemetryEvent_Params Parms{};

	Parms.EventClass = EventClass;
	Parms.EventName = EventName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MetricsServiceProvider.MetricsPlayerTimeAttributes
// (None)

class UClass* IMetricsPlayerTimeAttributes::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MetricsPlayerTimeAttributes");

	return Clss;
}


// MetricsPlayerTimeAttributes MetricsServiceProvider.Default__MetricsPlayerTimeAttributes
// (Public, ClassDefaultObject, ArchetypeObject)

class IMetricsPlayerTimeAttributes* IMetricsPlayerTimeAttributes::GetDefaultObj()
{
	static class IMetricsPlayerTimeAttributes* Default = nullptr;

	if (!Default)
		Default = static_cast<IMetricsPlayerTimeAttributes*>(IMetricsPlayerTimeAttributes::StaticClass()->DefaultObject);

	return Default;
}


// Class MetricsServiceProvider.TelemetryAssertionComponent
// (None)

class UClass* UTelemetryAssertionComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TelemetryAssertionComponent");

	return Clss;
}


// TelemetryAssertionComponent MetricsServiceProvider.Default__TelemetryAssertionComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UTelemetryAssertionComponent* UTelemetryAssertionComponent::GetDefaultObj()
{
	static class UTelemetryAssertionComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UTelemetryAssertionComponent*>(UTelemetryAssertionComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MetricsServiceProvider.TelemetryAssertionComponent.AddExpectedTelemetryEvent
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EMetricsClass           MetricsClass                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FMetricsEventAttr>   Attributes                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UTelemetryAssertionComponent::AddExpectedTelemetryEvent(enum class EMetricsClass MetricsClass, const class FString& EventName, TArray<struct FMetricsEventAttr>& Attributes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TelemetryAssertionComponent", "AddExpectedTelemetryEvent");

	Params::UTelemetryAssertionComponent_AddExpectedTelemetryEvent_Params Parms{};

	Parms.MetricsClass = MetricsClass;
	Parms.EventName = EventName;
	Parms.Attributes = Attributes;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


