#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_CompanionAvatarBlock.wid_CompanionAvatarBlock_C
// (None)

class UClass* UWid_CompanionAvatarBlock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_CompanionAvatarBlock_C");

	return Clss;
}


// wid_CompanionAvatarBlock_C wid_CompanionAvatarBlock.Default__wid_CompanionAvatarBlock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_CompanionAvatarBlock_C* UWid_CompanionAvatarBlock_C::GetDefaultObj()
{
	static class UWid_CompanionAvatarBlock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_CompanionAvatarBlock_C*>(UWid_CompanionAvatarBlock_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_CompanionAvatarBlock.wid_CompanionAvatarBlock_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CompanionID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActorInfo                  CallFunc_K2_GetActorInfo_Info                                    (None)
// bool                               CallFunc_K2_GetActorInfo_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCompanionDefinition        CallFunc_GetCompanionsInfo_ReturnValue                           (None)

void UWid_CompanionAvatarBlock_C::Init(class FName CompanionID, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const struct FActorInfo& CallFunc_K2_GetActorInfo_Info, bool CallFunc_K2_GetActorInfo_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, const struct FCompanionDefinition& CallFunc_GetCompanionsInfo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionAvatarBlock_C", "Init");

	Params::UWid_CompanionAvatarBlock_C_Init_Params Parms{};

	Parms.CompanionID = CompanionID;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_K2_GetActorInfo_Info = CallFunc_K2_GetActorInfo_Info;
	Parms.CallFunc_K2_GetActorInfo_ReturnValue = CallFunc_K2_GetActorInfo_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_GetCompanionsInfo_ReturnValue = CallFunc_GetCompanionsInfo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


