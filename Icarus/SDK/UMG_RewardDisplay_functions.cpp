#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_RewardDisplay.UMG_RewardDisplay_C
// (None)

class UClass* UUMG_RewardDisplay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_RewardDisplay_C");

	return Clss;
}


// UMG_RewardDisplay_C UMG_RewardDisplay.Default__UMG_RewardDisplay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_RewardDisplay_C* UUMG_RewardDisplay_C::GetDefaultObj()
{
	static class UUMG_RewardDisplay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_RewardDisplay_C*>(UUMG_RewardDisplay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_RewardDisplay.UMG_RewardDisplay_C.SetRewardColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UUMG_RewardDisplay_C::SetRewardColor(const struct FLinearColor& Color, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RewardDisplay_C", "SetRewardColor");

	Params::UUMG_RewardDisplay_C_SetRewardColor_Params Parms{};

	Parms.Color = Color;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RewardDisplay.UMG_RewardDisplay_C.SetRewardIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_RewardDisplay_C::SetRewardIcon(TSoftObjectPtr<class UTexture2D> Icon, bool CallFunc_IsValidSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RewardDisplay_C", "SetRewardIcon");

	Params::UUMG_RewardDisplay_C_SetRewardIcon_Params Parms{};

	Parms.Icon = Icon;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RewardDisplay.UMG_RewardDisplay_C.SetCoinReward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UUMG_RewardDisplay_C::SetCoinReward(int32 Amount, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RewardDisplay_C", "SetCoinReward");

	Params::UUMG_RewardDisplay_C_SetCoinReward_Params Parms{};

	Parms.Amount = Amount;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RewardDisplay.UMG_RewardDisplay_C.SetExoticReward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMetaResource               Exotic                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMetaCurrencyRowHandle      CallFunc_MakeMetaCurrency_ReturnValue                            (NoDestructor, HasGetValueTypeHash)
// struct FMetaCurrency               CallFunc_GetMetaCurrencyStruct_MetaCurrency                      (None)
// enum class EValid                  CallFunc_GetMetaCurrencyStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_RewardDisplay_C::SetExoticReward(const struct FMetaResource& Exotic, class FText CallFunc_Conv_IntToText_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FMetaCurrencyRowHandle& CallFunc_MakeMetaCurrency_ReturnValue, const struct FMetaCurrency& CallFunc_GetMetaCurrencyStruct_MetaCurrency, enum class EValid CallFunc_GetMetaCurrencyStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RewardDisplay_C", "SetExoticReward");

	Params::UUMG_RewardDisplay_C_SetExoticReward_Params Parms{};

	Parms.Exotic = Exotic;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_MakeMetaCurrency_ReturnValue = CallFunc_MakeMetaCurrency_ReturnValue;
	Parms.CallFunc_GetMetaCurrencyStruct_MetaCurrency = CallFunc_GetMetaCurrencyStruct_MetaCurrency;
	Parms.CallFunc_GetMetaCurrencyStruct_Paths = CallFunc_GetMetaCurrencyStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RewardDisplay.UMG_RewardDisplay_C.SetItemReward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMetaItem                   MetaItem                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FItemData                   Item                                                             (Edit, BlueprintVisible, ContainsInstancedReference)
// struct FItemData                   CallFunc_ConvertToItem_ReturnValue                               (ContainsInstancedReference)
// int32                              CallFunc_GetItemPropertyValue_IntValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValid              CallFunc_GetItemPropertyValue_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemableData               CallFunc_GetItemableData_ItemableData                            (None)
// enum class EDataValid              CallFunc_GetItemableData_Paths                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UUMG_RewardDisplay_C::SetItemReward(const struct FMetaItem& MetaItem, const struct FItemData& Item, const struct FItemData& CallFunc_ConvertToItem_ReturnValue, int32 CallFunc_GetItemPropertyValue_IntValue, enum class EDataValid CallFunc_GetItemPropertyValue_Paths, const struct FItemableData& CallFunc_GetItemableData_ItemableData, enum class EDataValid CallFunc_GetItemableData_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RewardDisplay_C", "SetItemReward");

	Params::UUMG_RewardDisplay_C_SetItemReward_Params Parms{};

	Parms.MetaItem = MetaItem;
	Parms.Item = Item;
	Parms.CallFunc_ConvertToItem_ReturnValue = CallFunc_ConvertToItem_ReturnValue;
	Parms.CallFunc_GetItemPropertyValue_IntValue = CallFunc_GetItemPropertyValue_IntValue;
	Parms.CallFunc_GetItemPropertyValue_Paths = CallFunc_GetItemPropertyValue_Paths;
	Parms.CallFunc_GetItemableData_ItemableData = CallFunc_GetItemableData_ItemableData;
	Parms.CallFunc_GetItemableData_Paths = CallFunc_GetItemableData_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RewardDisplay.UMG_RewardDisplay_C.Initialise
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_RewardDisplay_C::Initialise()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RewardDisplay_C", "Initialise");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_RewardDisplay.UMG_RewardDisplay_C.ExecuteUbergraph_UMG_RewardDisplay
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_RewardDisplay_C::ExecuteUbergraph_UMG_RewardDisplay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RewardDisplay_C", "ExecuteUbergraph_UMG_RewardDisplay");

	Params::UUMG_RewardDisplay_C_ExecuteUbergraph_UMG_RewardDisplay_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


