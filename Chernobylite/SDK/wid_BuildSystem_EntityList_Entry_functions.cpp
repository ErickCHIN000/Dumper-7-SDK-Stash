#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_BuildSystem_EntityList_Entry.wid_BuildSystem_EntityList_Entry_C
// (None)

class UClass* UWid_BuildSystem_EntityList_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_BuildSystem_EntityList_Entry_C");

	return Clss;
}


// wid_BuildSystem_EntityList_Entry_C wid_BuildSystem_EntityList_Entry.Default__wid_BuildSystem_EntityList_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_BuildSystem_EntityList_Entry_C* UWid_BuildSystem_EntityList_Entry_C::GetDefaultObj()
{
	static class UWid_BuildSystem_EntityList_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_BuildSystem_EntityList_Entry_C*>(UWid_BuildSystem_EntityList_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_BuildSystem_EntityList_Entry.wid_BuildSystem_EntityList_Entry_C.ContainsItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWid_BuildSystem_EntityList_Entry_C::ContainsItem(bool CallFunc_NotEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_EntityList_Entry_C", "ContainsItem");

	Params::UWid_BuildSystem_EntityList_Entry_C_ContainsItem_Params Parms{};

	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_BuildSystem_EntityList_Entry.wid_BuildSystem_EntityList_Entry_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        UniqueId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsOwned                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CurrentCount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        NewCustomText                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*                  Img                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Position                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             Entry                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Disabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               GreyOut                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        SocketName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     SocketOffset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    SocketRotationOffset                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EUpgradeType            UpgradeType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Idx                                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemInfo_IsValid                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemEntry                  CallFunc_GetItemInfo_ReturnValue                                 (None)
// TArray<class FName>                CallFunc_GetUpgrades_ReturnValue                                 (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetUpgradeInfo_isVaid                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUpgradeEntry               CallFunc_GetUpgradeInfo_ReturnValue                              (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Upgrade_Icon_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_BuildSystem_EntityList_Entry_C::Update(class FName ID, class FName UniqueId, bool IsOwned, int32 CurrentCount, class FText NewCustomText, class UTexture2D* Img, const struct FVector2D& Position, const struct FInventoryEntry& Entry, bool Disabled, bool GreyOut, class FName SocketName, const struct FVector& SocketOffset, const struct FRotator& SocketRotationOffset, enum class EUpgradeType UpgradeType, int32 Idx, int32 Temp_int_Array_Index_Variable, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_GetItemInfo_IsValid, const struct FItemEntry& CallFunc_GetItemInfo_ReturnValue, TArray<class FName>& CallFunc_GetUpgrades_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GetUpgradeInfo_isVaid, const struct FUpgradeEntry& CallFunc_GetUpgradeInfo_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable, class UWid_Upgrade_Icon_C* CallFunc_Create_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_EntityList_Entry_C", "Update");

	Params::UWid_BuildSystem_EntityList_Entry_C_Update_Params Parms{};

	Parms.ID = ID;
	Parms.UniqueId = UniqueId;
	Parms.IsOwned = IsOwned;
	Parms.CurrentCount = CurrentCount;
	Parms.NewCustomText = NewCustomText;
	Parms.Img = Img;
	Parms.Position = Position;
	Parms.Entry = Entry;
	Parms.Disabled = Disabled;
	Parms.GreyOut = GreyOut;
	Parms.SocketName = SocketName;
	Parms.SocketOffset = SocketOffset;
	Parms.SocketRotationOffset = SocketRotationOffset;
	Parms.UpgradeType = UpgradeType;
	Parms.Idx = Idx;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetItemInfo_IsValid = CallFunc_GetItemInfo_IsValid;
	Parms.CallFunc_GetItemInfo_ReturnValue = CallFunc_GetItemInfo_ReturnValue;
	Parms.CallFunc_GetUpgrades_ReturnValue = CallFunc_GetUpgrades_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetUpgradeInfo_isVaid = CallFunc_GetUpgradeInfo_isVaid;
	Parms.CallFunc_GetUpgradeInfo_ReturnValue = CallFunc_GetUpgradeInfo_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue = CallFunc_AddChildToUniformGrid_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_BuildSystem_EntityList_Entry.wid_BuildSystem_EntityList_Entry_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_BuildSystem_EntityList_Entry_C::SetSelected(bool NewSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_EntityList_Entry_C", "SetSelected");

	Params::UWid_BuildSystem_EntityList_Entry_C_SetSelected_Params Parms{};

	Parms.NewSelected = NewSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_BuildSystem_EntityList_Entry.wid_BuildSystem_EntityList_Entry_C.BndEvt__Button_64_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_BuildSystem_EntityList_Entry_C::BndEvt__Button_64_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_EntityList_Entry_C", "BndEvt__Button_64_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_EntityList_Entry.wid_BuildSystem_EntityList_Entry_C.BndEvt__Button_64_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_BuildSystem_EntityList_Entry_C::BndEvt__Button_64_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_EntityList_Entry_C", "BndEvt__Button_64_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_EntityList_Entry.wid_BuildSystem_EntityList_Entry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_BuildSystem_EntityList_Entry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_EntityList_Entry_C", "PreConstruct");

	Params::UWid_BuildSystem_EntityList_Entry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_BuildSystem_EntityList_Entry.wid_BuildSystem_EntityList_Entry_C.BndEvt__Button_64_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_BuildSystem_EntityList_Entry_C::BndEvt__Button_64_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_EntityList_Entry_C", "BndEvt__Button_64_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_EntityList_Entry.wid_BuildSystem_EntityList_Entry_C.ExecuteUbergraph_wid_BuildSystem_EntityList_Entry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetChildIndex_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_BuildSystem_EntityList_Entry_C::ExecuteUbergraph_wid_BuildSystem_EntityList_Entry(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetChildIndex_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_EntityList_Entry_C", "ExecuteUbergraph_wid_BuildSystem_EntityList_Entry");

	Params::UWid_BuildSystem_EntityList_Entry_C_ExecuteUbergraph_wid_BuildSystem_EntityList_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetChildIndex_ReturnValue = CallFunc_GetChildIndex_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


