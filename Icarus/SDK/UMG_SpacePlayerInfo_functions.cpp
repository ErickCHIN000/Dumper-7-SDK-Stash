#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_SpacePlayerInfo.UMG_SpacePlayerInfo_C
// (None)

class UClass* UUMG_SpacePlayerInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_SpacePlayerInfo_C");

	return Clss;
}


// UMG_SpacePlayerInfo_C UMG_SpacePlayerInfo.Default__UMG_SpacePlayerInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_SpacePlayerInfo_C* UUMG_SpacePlayerInfo_C::GetDefaultObj()
{
	static class UUMG_SpacePlayerInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_SpacePlayerInfo_C*>(UUMG_SpacePlayerInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_SpacePlayerInfo.UMG_SpacePlayerInfo_C.GetCharacterLevelText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FCharacterGrowth            CallFunc_GetCharacterGrowthStruct_CharacterGrowth                (None)
// enum class EValid                  CallFunc_GetCharacterGrowthStruct_Paths                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerCharacter_IsValid                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetLevel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UUMG_SpacePlayerInfo_C::GetCharacterLevelText(const struct FCharacterGrowth& CallFunc_GetCharacterGrowthStruct_CharacterGrowth, enum class EValid CallFunc_GetCharacterGrowthStruct_Paths, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_GetLevel_ReturnValue, int32 CallFunc_Clamp_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SpacePlayerInfo_C", "GetCharacterLevelText");

	Params::UUMG_SpacePlayerInfo_C_GetCharacterLevelText_Params Parms{};

	Parms.CallFunc_GetCharacterGrowthStruct_CharacterGrowth = CallFunc_GetCharacterGrowthStruct_CharacterGrowth;
	Parms.CallFunc_GetCharacterGrowthStruct_Paths = CallFunc_GetCharacterGrowthStruct_Paths;
	Parms.CallFunc_GetIcarusPlayerCharacter_IsValid = CallFunc_GetIcarusPlayerCharacter_IsValid;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetLevel_ReturnValue = CallFunc_GetLevel_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_SpacePlayerInfo.UMG_SpacePlayerInfo_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SpacePlayerInfo_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SpacePlayerInfo_C", "Tick");

	Params::UUMG_SpacePlayerInfo_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_SpacePlayerInfo.UMG_SpacePlayerInfo_C.ExecuteUbergraph_UMG_SpacePlayerInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOnlineProfileCharacter     CallFunc_GetActiveCharacter_ReturnValue                          (ConstParm)
// bool                               CallFunc_HasActiveCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerState*          K2Node_DynamicCast_AsIcarus_Player_State                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_SpacePlayerInfo_C::ExecuteUbergraph_UMG_SpacePlayerInfo(int32 EntryPoint, const struct FOnlineProfileCharacter& CallFunc_GetActiveCharacter_ReturnValue, bool CallFunc_HasActiveCharacter_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AIcarusPlayerState* K2Node_DynamicCast_AsIcarus_Player_State, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SpacePlayerInfo_C", "ExecuteUbergraph_UMG_SpacePlayerInfo");

	Params::UUMG_SpacePlayerInfo_C_ExecuteUbergraph_UMG_SpacePlayerInfo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActiveCharacter_ReturnValue = CallFunc_GetActiveCharacter_ReturnValue;
	Parms.CallFunc_HasActiveCharacter_ReturnValue = CallFunc_HasActiveCharacter_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_State = K2Node_DynamicCast_AsIcarus_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


