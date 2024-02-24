#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_HUD_sw_DamagedEquipSlot.WBP_HUD_sw_DamagedEquipSlot_C
// (None)

class UClass* UWBP_HUD_sw_DamagedEquipSlot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_HUD_sw_DamagedEquipSlot_C");

	return Clss;
}


// WBP_HUD_sw_DamagedEquipSlot_C WBP_HUD_sw_DamagedEquipSlot.Default__WBP_HUD_sw_DamagedEquipSlot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_HUD_sw_DamagedEquipSlot_C* UWBP_HUD_sw_DamagedEquipSlot_C::GetDefaultObj()
{
	static class UWBP_HUD_sw_DamagedEquipSlot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_HUD_sw_DamagedEquipSlot_C*>(UWBP_HUD_sw_DamagedEquipSlot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_HUD_sw_DamagedEquipSlot.WBP_HUD_sw_DamagedEquipSlot_C.InitializeDesignerPreview
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HUD_sw_DamagedEquipSlot_C::InitializeDesignerPreview()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_sw_DamagedEquipSlot_C", "InitializeDesignerPreview");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HUD_sw_DamagedEquipSlot.WBP_HUD_sw_DamagedEquipSlot_C.UnbindFromInventoryComponentEvents
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_sw_DamagedEquipSlot_C::UnbindFromInventoryComponentEvents(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_sw_DamagedEquipSlot_C", "UnbindFromInventoryComponentEvents");

	Params::UWBP_HUD_sw_DamagedEquipSlot_C_UnbindFromInventoryComponentEvents_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_sw_DamagedEquipSlot.WBP_HUD_sw_DamagedEquipSlot_C.UnbindFromLoadoutComponentEvents
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_sw_DamagedEquipSlot_C::UnbindFromLoadoutComponentEvents(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_sw_DamagedEquipSlot_C", "UnbindFromLoadoutComponentEvents");

	Params::UWBP_HUD_sw_DamagedEquipSlot_C_UnbindFromLoadoutComponentEvents_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_sw_DamagedEquipSlot.WBP_HUD_sw_DamagedEquipSlot_C.RemoveBindings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HUD_sw_DamagedEquipSlot_C::RemoveBindings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_sw_DamagedEquipSlot_C", "RemoveBindings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HUD_sw_DamagedEquipSlot.WBP_HUD_sw_DamagedEquipSlot_C.OnInventoryEntryUpdated
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             UpdatedEntry                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FInventoryEntry             CallFunc_GetInventoryEntry_ReturnValue                           (ConstParm)
// bool                               CallFunc_EqualEqual_GuidGuid_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_sw_DamagedEquipSlot_C::OnInventoryEntryUpdated(struct FInventoryEntry& UpdatedEntry, const struct FInventoryEntry& CallFunc_GetInventoryEntry_ReturnValue, bool CallFunc_EqualEqual_GuidGuid_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_sw_DamagedEquipSlot_C", "OnInventoryEntryUpdated");

	Params::UWBP_HUD_sw_DamagedEquipSlot_C_OnInventoryEntryUpdated_Params Parms{};

	Parms.UpdatedEntry = UpdatedEntry;
	Parms.CallFunc_GetInventoryEntry_ReturnValue = CallFunc_GetInventoryEntry_ReturnValue;
	Parms.CallFunc_EqualEqual_GuidGuid_ReturnValue = CallFunc_EqualEqual_GuidGuid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_sw_DamagedEquipSlot.WBP_HUD_sw_DamagedEquipSlot_C.OnLoadoutReady
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class IInterface>      Temp_class_Variable                                              (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_FindFirstImplementor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_InventoryComponent_C*    CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_sw_DamagedEquipSlot_C::OnLoadoutReady(bool Success, bool CallFunc_IsValid_ReturnValue, TSubclassOf<class IInterface> Temp_class_Variable, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UObject* CallFunc_FindFirstImplementor_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UBP_InventoryComponent_C* CallFunc_GetComponentByClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_sw_DamagedEquipSlot_C", "OnLoadoutReady");

	Params::UWBP_HUD_sw_DamagedEquipSlot_C_OnLoadoutReady_Params Parms{};

	Parms.Success = Success;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_FindFirstImplementor_ReturnValue = CallFunc_FindFirstImplementor_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_sw_DamagedEquipSlot.WBP_HUD_sw_DamagedEquipSlot_C.SetupItemSlot
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEquippableItem*             Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ILoadoutReadInterface>K2Node_DynamicCast_AsLoadout_Read_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_EquippableItemBase_C*    K2Node_DynamicCast_AsBP_Equippable_Item_Base                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetItemInLoadoutSlot_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_sw_DamagedEquipSlot_C::SetupItemSlot(class AEquippableItem* Temp_object_Variable, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface, bool K2Node_DynamicCast_bSuccess, class ABP_EquippableItemBase_C* K2Node_DynamicCast_AsBP_Equippable_Item_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, class AEquippableItem* CallFunc_GetItemInLoadoutSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_sw_DamagedEquipSlot_C", "SetupItemSlot");

	Params::UWBP_HUD_sw_DamagedEquipSlot_C_SetupItemSlot_Params Parms{};

	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsLoadout_Read_Interface = K2Node_DynamicCast_AsLoadout_Read_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Equippable_Item_Base = K2Node_DynamicCast_AsBP_Equippable_Item_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItemInLoadoutSlot_ReturnValue = CallFunc_GetItemInLoadoutSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_sw_DamagedEquipSlot.WBP_HUD_sw_DamagedEquipSlot_C.UpdateDurability
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDurability_HasDurability                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemInstanceDurabilityData CallFunc_GetDurability_DurabilityData                            (NoDestructor)

void UWBP_HUD_sw_DamagedEquipSlot_C::UpdateDurability(const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetDurability_HasDurability, const struct FItemInstanceDurabilityData& CallFunc_GetDurability_DurabilityData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_sw_DamagedEquipSlot_C", "UpdateDurability");

	Params::UWBP_HUD_sw_DamagedEquipSlot_C_UpdateDurability_Params Parms{};

	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDurability_HasDurability = CallFunc_GetDurability_HasDurability;
	Parms.CallFunc_GetDurability_DurabilityData = CallFunc_GetDurability_DurabilityData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_sw_DamagedEquipSlot.WBP_HUD_sw_DamagedEquipSlot_C.UpdateCurrentEquippableItem
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_EquippableItemBase_C*    NewEquippableItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_sw_DamagedEquipSlot_C::UpdateCurrentEquippableItem(class ABP_EquippableItemBase_C* NewEquippableItem, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_sw_DamagedEquipSlot_C", "UpdateCurrentEquippableItem");

	Params::UWBP_HUD_sw_DamagedEquipSlot_C_UpdateCurrentEquippableItem_Params Parms{};

	Parms.NewEquippableItem = NewEquippableItem;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_sw_DamagedEquipSlot.WBP_HUD_sw_DamagedEquipSlot_C.SetupIcon
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<enum class E_EquipSlotType, TSoftObjectPtr<class UTexture2D>>LSlotTypeToIconMap                                               (Edit, BlueprintVisible)
// TSoftObjectPtr<class UTexture2D>   LTexture                                                         (Edit, BlueprintVisible, HasGetValueTypeHash)
// TMap<enum class E_EquipSlotType, TSoftObjectPtr<class UTexture2D>>K2Node_MakeVariable_MakeVariableOutput                           (None)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_sw_DamagedEquipSlot_C::SetupIcon(TMap<enum class E_EquipSlotType, TSoftObjectPtr<class UTexture2D>> LSlotTypeToIconMap, TSoftObjectPtr<class UTexture2D> LTexture, TMap<enum class E_EquipSlotType, TSoftObjectPtr<class UTexture2D>> K2Node_MakeVariable_MakeVariableOutput, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_sw_DamagedEquipSlot_C", "SetupIcon");

	Params::UWBP_HUD_sw_DamagedEquipSlot_C_SetupIcon_Params Parms{};

	Parms.LSlotTypeToIconMap = LSlotTypeToIconMap;
	Parms.LTexture = LTexture;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_sw_DamagedEquipSlot.WBP_HUD_sw_DamagedEquipSlot_C.Initialize
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IAwaitable> CallFunc_AwaitBP_Awaitable_CastInput                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FDelegateHandleBPWrapper    CallFunc_AwaitBP_Handle                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_LoadoutComponent_C*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_sw_DamagedEquipSlot_C::Initialize(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, TScriptInterface<class IAwaitable> CallFunc_AwaitBP_Awaitable_CastInput, const struct FDelegateHandleBPWrapper& CallFunc_AwaitBP_Handle, class UBP_LoadoutComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_sw_DamagedEquipSlot_C", "Initialize");

	Params::UWBP_HUD_sw_DamagedEquipSlot_C_Initialize_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_AwaitBP_Awaitable_CastInput = CallFunc_AwaitBP_Awaitable_CastInput;
	Parms.CallFunc_AwaitBP_Handle = CallFunc_AwaitBP_Handle;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_sw_DamagedEquipSlot.WBP_HUD_sw_DamagedEquipSlot_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_HUD_sw_DamagedEquipSlot_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_sw_DamagedEquipSlot_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HUD_sw_DamagedEquipSlot.WBP_HUD_sw_DamagedEquipSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_HUD_sw_DamagedEquipSlot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_sw_DamagedEquipSlot_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HUD_sw_DamagedEquipSlot.WBP_HUD_sw_DamagedEquipSlot_C.OnPawnPossessedAndReady
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                       NewPawn                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_sw_DamagedEquipSlot_C::OnPawnPossessedAndReady(class APawn* NewPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_sw_DamagedEquipSlot_C", "OnPawnPossessedAndReady");

	Params::UWBP_HUD_sw_DamagedEquipSlot_C_OnPawnPossessedAndReady_Params Parms{};

	Parms.NewPawn = NewPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_sw_DamagedEquipSlot.WBP_HUD_sw_DamagedEquipSlot_C.OnPawnUnpossessed
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                       OldPawn                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_sw_DamagedEquipSlot_C::OnPawnUnpossessed(class APawn* OldPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_sw_DamagedEquipSlot_C", "OnPawnUnpossessed");

	Params::UWBP_HUD_sw_DamagedEquipSlot_C_OnPawnUnpossessed_Params Parms{};

	Parms.OldPawn = OldPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_sw_DamagedEquipSlot.WBP_HUD_sw_DamagedEquipSlot_C.ExecuteUbergraph_WBP_HUD_sw_DamagedEquipSlot
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_NewPawn                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_OldPawn                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_sw_DamagedEquipSlot_C::ExecuteUbergraph_WBP_HUD_sw_DamagedEquipSlot(int32 EntryPoint, class APawn* K2Node_Event_NewPawn, class APawn* K2Node_Event_OldPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_sw_DamagedEquipSlot_C", "ExecuteUbergraph_WBP_HUD_sw_DamagedEquipSlot");

	Params::UWBP_HUD_sw_DamagedEquipSlot_C_ExecuteUbergraph_WBP_HUD_sw_DamagedEquipSlot_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NewPawn = K2Node_Event_NewPawn;
	Parms.K2Node_Event_OldPawn = K2Node_Event_OldPawn;

	UObject::ProcessEvent(Func, &Parms);

}

}


