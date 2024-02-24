#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GbxSpark.EnumerateTelemetryCommandlet
// (None)

class UClass* UEnumerateTelemetryCommandlet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnumerateTelemetryCommandlet");

	return Clss;
}


// EnumerateTelemetryCommandlet GbxSpark.Default__EnumerateTelemetryCommandlet
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnumerateTelemetryCommandlet* UEnumerateTelemetryCommandlet::GetDefaultObj()
{
	static class UEnumerateTelemetryCommandlet* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnumerateTelemetryCommandlet*>(UEnumerateTelemetryCommandlet::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxSpark.SparkBlueprintLibrary
// (None)

class UClass* USparkBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SparkBlueprintLibrary");

	return Clss;
}


// SparkBlueprintLibrary GbxSpark.Default__SparkBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class USparkBlueprintLibrary* USparkBlueprintLibrary::GetDefaultObj()
{
	static class USparkBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<USparkBlueprintLibrary*>(USparkBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxSpark.SparkBlueprintLibrary.PostLeviathanEventWithAttribute
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AttributeName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AttributeValue                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USparkBlueprintLibrary::PostLeviathanEventWithAttribute(class APlayerController* PlayerController, const class FString& EventName, const class FString& AttributeName, const class FString& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SparkBlueprintLibrary", "PostLeviathanEventWithAttribute");

	Params::USparkBlueprintLibrary_PostLeviathanEventWithAttribute_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.EventName = EventName;
	Parms.AttributeName = AttributeName;
	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxSpark.SparkBlueprintLibrary.PostLeviathanEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USparkBlueprintLibrary::PostLeviathanEvent(class APlayerController* PlayerController, const class FString& EventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SparkBlueprintLibrary", "PostLeviathanEvent");

	Params::USparkBlueprintLibrary_PostLeviathanEvent_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.EventName = EventName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


