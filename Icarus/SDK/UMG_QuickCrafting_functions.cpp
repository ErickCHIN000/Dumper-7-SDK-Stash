#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_QuickCrafting.UMG_QuickCrafting_C
// (None)

class UClass* UUMG_QuickCrafting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_QuickCrafting_C");

	return Clss;
}


// UMG_QuickCrafting_C UMG_QuickCrafting.Default__UMG_QuickCrafting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_QuickCrafting_C* UUMG_QuickCrafting_C::GetDefaultObj()
{
	static class UUMG_QuickCrafting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_QuickCrafting_C*>(UUMG_QuickCrafting_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_QuickCrafting.UMG_QuickCrafting_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_QuickCrafting_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_QuickCrafting_C", "Tick");

	Params::UUMG_QuickCrafting_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_QuickCrafting.UMG_QuickCrafting_C.OnProcessingItemUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProcessingItem             Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UUMG_QuickCrafting_C::OnProcessingItemUpdated(const struct FProcessingItem& Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_QuickCrafting_C", "OnProcessingItemUpdated");

	Params::UUMG_QuickCrafting_C_OnProcessingItemUpdated_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_QuickCrafting.UMG_QuickCrafting_C.ExecuteUbergraph_UMG_QuickCrafting
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerCharacter_IsValid                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProcessingItem             K2Node_CustomEvent_Item                                          (NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerCharacter_IsValid_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival_1       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_QuickCrafting_C::ExecuteUbergraph_UMG_QuickCrafting(int32 EntryPoint, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchEnum_CmpSuccess, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FProcessingItem& K2Node_CustomEvent_Item, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsVisible_ReturnValue_1, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid_1, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue_1, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival_1, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_QuickCrafting_C", "ExecuteUbergraph_UMG_QuickCrafting");

	Params::UUMG_QuickCrafting_C_ExecuteUbergraph_UMG_QuickCrafting_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetIcarusPlayerCharacter_IsValid = CallFunc_GetIcarusPlayerCharacter_IsValid;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_CustomEvent_Item = K2Node_CustomEvent_Item;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue_1 = CallFunc_IsVisible_ReturnValue_1;
	Parms.CallFunc_GetIcarusPlayerCharacter_IsValid_1 = CallFunc_GetIcarusPlayerCharacter_IsValid_1;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue_1 = CallFunc_GetIcarusPlayerCharacter_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival_1 = K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


