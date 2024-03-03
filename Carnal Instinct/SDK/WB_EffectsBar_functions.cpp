#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_EffectsBar.WB_EffectsBar_C
// (None)

class UClass* UWB_EffectsBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_EffectsBar_C");

	return Clss;
}


// WB_EffectsBar_C WB_EffectsBar.Default__WB_EffectsBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_EffectsBar_C* UWB_EffectsBar_C::GetDefaultObj()
{
	static class UWB_EffectsBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_EffectsBar_C*>(UWB_EffectsBar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_EffectsBar.WB_EffectsBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_EffectsBar_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_EffectsBar_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_EffectsBar.WB_EffectsBar_C.Initialize Circle Rotation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_StatCategory          Stat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_EffectsBar_C::Initialize_Circle_Rotation(enum class E_StatCategory Stat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_EffectsBar_C", "Initialize Circle Rotation");

	Params::UWB_EffectsBar_C_Initialize_Circle_Rotation_Params Parms{};

	Parms.Stat = Stat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_EffectsBar.WB_EffectsBar_C.ExecuteUbergraph_WB_EffectsBar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_CircleEffect_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWB_CircleEffect_C*          CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_StatCategory          K2Node_CustomEvent_Stat                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWB_CircleEffect_C*          CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWB_CircleEffect_C*          CallFunc_Create_ReturnValue_3                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue_1                               (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue_2                               (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWB_CircleEffect_C*          CallFunc_Create_ReturnValue_4                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue_3                               (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue_1                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin_4                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWB_CircleEffect_C*          CallFunc_Create_ReturnValue_5                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue_4                               (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue_2                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue_3                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue_5                               (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin_5                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue_4                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_CircleEffect_C*          CallFunc_Create_ReturnValue_6                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue_6                               (NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue_5                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue_6                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin_6                                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_EffectsBar_C::ExecuteUbergraph_WB_EffectsBar(int32 EntryPoint, class UWB_CircleEffect_C* CallFunc_Create_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UWB_CircleEffect_C* CallFunc_Create_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin_1, enum class E_StatCategory K2Node_CustomEvent_Stat, bool K2Node_SwitchEnum_CmpSuccess, class UWB_CircleEffect_C* CallFunc_Create_ReturnValue_2, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin_2, class UWB_CircleEffect_C* CallFunc_Create_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, const struct FMargin& K2Node_MakeStruct_Margin_3, class UWB_CircleEffect_C* CallFunc_Create_ReturnValue_4, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin_4, class UWB_CircleEffect_C* CallFunc_Create_ReturnValue_5, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_4, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_2, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_3, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_5, const struct FMargin& K2Node_MakeStruct_Margin_5, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_4, class UWB_CircleEffect_C* CallFunc_Create_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_6, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_6, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_5, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_6, const struct FMargin& K2Node_MakeStruct_Margin_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_EffectsBar_C", "ExecuteUbergraph_WB_EffectsBar");

	Params::UWB_EffectsBar_C_ExecuteUbergraph_WB_EffectsBar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.K2Node_MakeStruct_Margin_1 = K2Node_MakeStruct_Margin_1;
	Parms.K2Node_CustomEvent_Stat = K2Node_CustomEvent_Stat;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory = CallFunc_Get_AC_Inventory_AC_Inventory;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_Margin_2 = K2Node_MakeStruct_Margin_2;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_SetTimer_ReturnValue_1 = CallFunc_K2_SetTimer_ReturnValue_1;
	Parms.CallFunc_K2_SetTimer_ReturnValue_2 = CallFunc_K2_SetTimer_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_MakeStruct_Margin_3 = K2Node_MakeStruct_Margin_3;
	Parms.CallFunc_Create_ReturnValue_4 = CallFunc_Create_ReturnValue_4;
	Parms.CallFunc_K2_SetTimer_ReturnValue_3 = CallFunc_K2_SetTimer_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue_1 = CallFunc_AddChildToHorizontalBox_ReturnValue_1;
	Parms.K2Node_MakeStruct_Margin_4 = K2Node_MakeStruct_Margin_4;
	Parms.CallFunc_Create_ReturnValue_5 = CallFunc_Create_ReturnValue_5;
	Parms.CallFunc_K2_SetTimer_ReturnValue_4 = CallFunc_K2_SetTimer_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue_2 = CallFunc_AddChildToHorizontalBox_ReturnValue_2;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue_3 = CallFunc_AddChildToHorizontalBox_ReturnValue_3;
	Parms.CallFunc_K2_SetTimer_ReturnValue_5 = CallFunc_K2_SetTimer_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_MakeStruct_Margin_5 = K2Node_MakeStruct_Margin_5;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue_4 = CallFunc_AddChildToHorizontalBox_ReturnValue_4;
	Parms.CallFunc_Create_ReturnValue_6 = CallFunc_Create_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_K2_SetTimer_ReturnValue_6 = CallFunc_K2_SetTimer_ReturnValue_6;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue_5 = CallFunc_AddChildToHorizontalBox_ReturnValue_5;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue_6 = CallFunc_AddChildToHorizontalBox_ReturnValue_6;
	Parms.K2Node_MakeStruct_Margin_6 = K2Node_MakeStruct_Margin_6;

	UObject::ProcessEvent(Func, &Parms);

}

}


