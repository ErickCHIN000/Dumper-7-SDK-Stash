#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class BhvrAnalytics.BhvrAnalyticsBlueprintLibrary
// (None)

class UClass* UBhvrAnalyticsBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BhvrAnalyticsBlueprintLibrary");

	return Clss;
}


// BhvrAnalyticsBlueprintLibrary BhvrAnalytics.Default__BhvrAnalyticsBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UBhvrAnalyticsBlueprintLibrary* UBhvrAnalyticsBlueprintLibrary::GetDefaultObj()
{
	static class UBhvrAnalyticsBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UBhvrAnalyticsBlueprintLibrary*>(UBhvrAnalyticsBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function BhvrAnalytics.BhvrAnalyticsBlueprintLibrary.RecordBhvrAnalyticsEventAttribute
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UStruct*                     AnyStruct                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBhvrAnalyticsBlueprintLibrary::RecordBhvrAnalyticsEventAttribute(class UStruct* AnyStruct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BhvrAnalyticsBlueprintLibrary", "RecordBhvrAnalyticsEventAttribute");

	Params::UBhvrAnalyticsBlueprintLibrary_RecordBhvrAnalyticsEventAttribute_Params Parms{};

	Parms.AnyStruct = AnyStruct;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class BhvrAnalytics.BhvrAnalyticsSubsystem
// (None)

class UClass* UBhvrAnalyticsSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BhvrAnalyticsSubsystem");

	return Clss;
}


// BhvrAnalyticsSubsystem BhvrAnalytics.Default__BhvrAnalyticsSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UBhvrAnalyticsSubsystem* UBhvrAnalyticsSubsystem::GetDefaultObj()
{
	static class UBhvrAnalyticsSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UBhvrAnalyticsSubsystem*>(UBhvrAnalyticsSubsystem::StaticClass()->DefaultObject);

	return Default;
}

}


