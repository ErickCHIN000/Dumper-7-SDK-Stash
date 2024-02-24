#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Creature_NPC_Human.BP_Creature_NPC_Human_C
// (Actor, Pawn)

class UClass* ABP_Creature_NPC_Human_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Creature_NPC_Human_C");

	return Clss;
}


// BP_Creature_NPC_Human_C BP_Creature_NPC_Human.Default__BP_Creature_NPC_Human_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Creature_NPC_Human_C* ABP_Creature_NPC_Human_C::GetDefaultObj()
{
	static class ABP_Creature_NPC_Human_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Creature_NPC_Human_C*>(ABP_Creature_NPC_Human_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Creature_NPC_Human.BP_Creature_NPC_Human_C.GenerateNewNPCName
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FStringTableEntryHandle     NewNPCName                                                       (Parm, OutParm)
// struct FDataTableRowHandle         SelectedAppearance                                               (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetSelectedArchetype_SelectedArchetype                  (NoDestructor, HasGetValueTypeHash)
// struct FCharacterAppearance_Preset CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStringTableEntryHandle     CallFunc_Get_Rand_NPC_Name_NameHandle                            (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStringTableEntryHandle     CallFunc_GenerateNewNPCName_NewNPCName                           (None)

void ABP_Creature_NPC_Human_C::GenerateNewNPCName(struct FStringTableEntryHandle* NewNPCName, const struct FDataTableRowHandle& SelectedAppearance, bool CallFunc_HasAuthority_ReturnValue, const struct FDataTableRowHandle& CallFunc_GetSelectedArchetype_SelectedArchetype, const struct FCharacterAppearance_Preset& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FStringTableEntryHandle& CallFunc_Get_Rand_NPC_Name_NameHandle, bool CallFunc_IsValid_ReturnValue_1, const struct FStringTableEntryHandle& CallFunc_GenerateNewNPCName_NewNPCName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Human_C", "GenerateNewNPCName");

	Params::ABP_Creature_NPC_Human_C_GenerateNewNPCName_Params Parms{};

	Parms.SelectedAppearance = SelectedAppearance;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetSelectedArchetype_SelectedArchetype = CallFunc_GetSelectedArchetype_SelectedArchetype;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Get_Rand_NPC_Name_NameHandle = CallFunc_Get_Rand_NPC_Name_NameHandle;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GenerateNewNPCName_NewNPCName = CallFunc_GenerateNewNPCName_NewNPCName;

	UObject::ProcessEvent(Func, &Parms);

	if (NewNPCName != nullptr)
		*NewNPCName = std::move(Parms.NewNPCName);

}


// Function BP_Creature_NPC_Human.BP_Creature_NPC_Human_C.EquippedItemChangeOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Creature_NPC_Human_C::EquippedItemChangeOverride()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Human_C", "EquippedItemChangeOverride");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Creature_NPC_Human.BP_Creature_NPC_Human_C.OnRep_bIsDown?
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Creature_NPC_Human_C::OnRep_bIsDown_()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Human_C", "OnRep_bIsDown?");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Creature_NPC_Human.BP_Creature_NPC_Human_C.HandleReviveInteraction
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_UIMenusComponent_C*      UIMenusComponent                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_UIMenusComponent_C*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_Human_C::HandleReviveInteraction(class AController* Controller, class UBP_UIMenusComponent_C* UIMenusComponent, bool CallFunc_IsValid_ReturnValue, class UBP_UIMenusComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Human_C", "HandleReviveInteraction");

	Params::ABP_Creature_NPC_Human_C_HandleReviveInteraction_Params Parms{};

	Parms.Controller = Controller;
	Parms.UIMenusComponent = UIMenusComponent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_NPC_Human.BP_Creature_NPC_Human_C.GetClothes_Back
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      BackComponent                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_Human_C::GetClothes_Back(class USkeletalMeshComponent** BackComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Human_C", "GetClothes_Back");

	Params::ABP_Creature_NPC_Human_C_GetClothes_Back_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (BackComponent != nullptr)
		*BackComponent = Parms.BackComponent;

}


// Function BP_Creature_NPC_Human.BP_Creature_NPC_Human_C.ResetAppearanceAndLoadout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         NPCData                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FNWXNPCHumanData            CallFunc_GetNPCHumanDataFromDataTableRow_OutNPCHumanData         (None)
// enum class ENPCBlueprintHelperGetResultCallFunc_GetNPCHumanDataFromDataTableRow_Branches                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetNPCHumanDataFromDataTableRow_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CreateAndEquipItemFromItemID_Success                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_Human_C::ResetAppearanceAndLoadout(const struct FDataTableRowHandle& NPCData, const struct FNWXNPCHumanData& CallFunc_GetNPCHumanDataFromDataTableRow_OutNPCHumanData, enum class ENPCBlueprintHelperGetResult CallFunc_GetNPCHumanDataFromDataTableRow_Branches, bool CallFunc_GetNPCHumanDataFromDataTableRow_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_CreateAndEquipItemFromItemID_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Human_C", "ResetAppearanceAndLoadout");

	Params::ABP_Creature_NPC_Human_C_ResetAppearanceAndLoadout_Params Parms{};

	Parms.NPCData = NPCData;
	Parms.CallFunc_GetNPCHumanDataFromDataTableRow_OutNPCHumanData = CallFunc_GetNPCHumanDataFromDataTableRow_OutNPCHumanData;
	Parms.CallFunc_GetNPCHumanDataFromDataTableRow_Branches = CallFunc_GetNPCHumanDataFromDataTableRow_Branches;
	Parms.CallFunc_GetNPCHumanDataFromDataTableRow_ReturnValue = CallFunc_GetNPCHumanDataFromDataTableRow_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_CreateAndEquipItemFromItemID_Success = CallFunc_CreateAndEquipItemFromItemID_Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_NPC_Human.BP_Creature_NPC_Human_C.GrantInitialEquipment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         NPCData                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               ClearInventory                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNWXNPCHumanData            CallFunc_GetNPCHumanDataFromDataTableRow_OutNPCHumanData         (None)
// enum class ENPCBlueprintHelperGetResultCallFunc_GetNPCHumanDataFromDataTableRow_Branches                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetNPCHumanDataFromDataTableRow_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNWXNPCHumanLoadoutData     CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_Human_C::GrantInitialEquipment(const struct FDataTableRowHandle& NPCData, bool ClearInventory, int32 Temp_int_Array_Index_Variable, const struct FNWXNPCHumanData& CallFunc_GetNPCHumanDataFromDataTableRow_OutNPCHumanData, enum class ENPCBlueprintHelperGetResult CallFunc_GetNPCHumanDataFromDataTableRow_Branches, bool CallFunc_GetNPCHumanDataFromDataTableRow_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Loop_Counter_Variable, const struct FNWXNPCHumanLoadoutData& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Human_C", "GrantInitialEquipment");

	Params::ABP_Creature_NPC_Human_C_GrantInitialEquipment_Params Parms{};

	Parms.NPCData = NPCData;
	Parms.ClearInventory = ClearInventory;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetNPCHumanDataFromDataTableRow_OutNPCHumanData = CallFunc_GetNPCHumanDataFromDataTableRow_OutNPCHumanData;
	Parms.CallFunc_GetNPCHumanDataFromDataTableRow_Branches = CallFunc_GetNPCHumanDataFromDataTableRow_Branches;
	Parms.CallFunc_GetNPCHumanDataFromDataTableRow_ReturnValue = CallFunc_GetNPCHumanDataFromDataTableRow_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_NPC_Human.BP_Creature_NPC_Human_C.GetPowerLevel
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FPowerLevel                 OutPowerLevel                                                    (Parm, OutParm, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPowerLevel                 CallFunc_GetPowerLevel_OutPowerLevel                             (NoDestructor)
// bool                               CallFunc_GetPowerLevel_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetItemConst_Weapon                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetItemLevel_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPowerLevel                 K2Node_MakeStruct_PowerLevel                                     (NoDestructor)
// double                             CallFunc_FFloor_A_ImplicitCast                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_Creature_NPC_Human_C::GetPowerLevel(struct FPowerLevel* OutPowerLevel, const struct FPowerLevel& CallFunc_GetPowerLevel_OutPowerLevel, bool CallFunc_GetPowerLevel_ReturnValue, class AEquippableItem* CallFunc_GetItemConst_Weapon, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetItemLevel_ReturnValue, int32 CallFunc_FFloor_ReturnValue, const struct FPowerLevel& K2Node_MakeStruct_PowerLevel, double CallFunc_FFloor_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Human_C", "GetPowerLevel");

	Params::ABP_Creature_NPC_Human_C_GetPowerLevel_Params Parms{};

	Parms.CallFunc_GetPowerLevel_OutPowerLevel = CallFunc_GetPowerLevel_OutPowerLevel;
	Parms.CallFunc_GetPowerLevel_ReturnValue = CallFunc_GetPowerLevel_ReturnValue;
	Parms.CallFunc_GetItemConst_Weapon = CallFunc_GetItemConst_Weapon;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItemLevel_ReturnValue = CallFunc_GetItemLevel_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.K2Node_MakeStruct_PowerLevel = K2Node_MakeStruct_PowerLevel;
	Parms.CallFunc_FFloor_A_ImplicitCast = CallFunc_FFloor_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (OutPowerLevel != nullptr)
		*OutPowerLevel = std::move(Parms.OutPowerLevel);

	return Parms.ReturnValue;

}


// Function BP_Creature_NPC_Human.BP_Creature_NPC_Human_C.TagCountChanged
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Tag                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LCount                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                LTag                                                             (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       Temp_struct_Variable                                             (ConstParm)
// bool                               CallFunc_AreAutomatedTestsRunning_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       Temp_struct_Variable_1                                           (ConstParm)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_Human_C::TagCountChanged(struct FGameplayTag& Tag, int32 Count, int32 LCount, const struct FGameplayTag& LTag, const struct FGameplayTagContainer& Temp_struct_Variable, bool CallFunc_AreAutomatedTestsRunning_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_1, const struct FGameplayTagContainer& Temp_struct_Variable_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Human_C", "TagCountChanged");

	Params::ABP_Creature_NPC_Human_C_TagCountChanged_Params Parms{};

	Parms.Tag = Tag;
	Parms.Count = Count;
	Parms.LCount = LCount;
	Parms.LTag = LTag;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_AreAutomatedTestsRunning_ReturnValue = CallFunc_AreAutomatedTestsRunning_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue_1 = CallFunc_EqualEqual_GameplayTag_ReturnValue_1;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_NPC_Human.BP_Creature_NPC_Human_C.GetBodyPart_Teeth
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      TeethComponent                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_Human_C::GetBodyPart_Teeth(class USkeletalMeshComponent** TeethComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Human_C", "GetBodyPart_Teeth");

	Params::ABP_Creature_NPC_Human_C_GetBodyPart_Teeth_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TeethComponent != nullptr)
		*TeethComponent = Parms.TeethComponent;

}


// Function BP_Creature_NPC_Human.BP_Creature_NPC_Human_C.GetBodyPart_Hair
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      HairComponent                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_Human_C::GetBodyPart_Hair(class USkeletalMeshComponent** HairComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Human_C", "GetBodyPart_Hair");

	Params::ABP_Creature_NPC_Human_C_GetBodyPart_Hair_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (HairComponent != nullptr)
		*HairComponent = Parms.HairComponent;

}


// Function BP_Creature_NPC_Human.BP_Creature_NPC_Human_C.GetBodyPart_FacialHair
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      FacialHairComponent                                              (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_Human_C::GetBodyPart_FacialHair(class USkeletalMeshComponent** FacialHairComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Human_C", "GetBodyPart_FacialHair");

	Params::ABP_Creature_NPC_Human_C_GetBodyPart_FacialHair_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (FacialHairComponent != nullptr)
		*FacialHairComponent = Parms.FacialHairComponent;

}


// Function BP_Creature_NPC_Human.BP_Creature_NPC_Human_C.GetBodyPart_Eyes
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      EyeComponent                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_Human_C::GetBodyPart_Eyes(class USkeletalMeshComponent** EyeComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Human_C", "GetBodyPart_Eyes");

	Params::ABP_Creature_NPC_Human_C_GetBodyPart_Eyes_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EyeComponent != nullptr)
		*EyeComponent = Parms.EyeComponent;

}


// Function BP_Creature_NPC_Human.BP_Creature_NPC_Human_C.GetBodyPart_Eyebrows
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      EyebrowsComponent                                                (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_Human_C::GetBodyPart_Eyebrows(class USkeletalMeshComponent** EyebrowsComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Human_C", "GetBodyPart_Eyebrows");

	Params::ABP_Creature_NPC_Human_C_GetBodyPart_Eyebrows_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EyebrowsComponent != nullptr)
		*EyebrowsComponent = Parms.EyebrowsComponent;

}


// Function BP_Creature_NPC_Human.BP_Creature_NPC_Human_C.GetClothes_Jewelry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      JewelryComponent                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_Human_C::GetClothes_Jewelry(class USkeletalMeshComponent** JewelryComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Human_C", "GetClothes_Jewelry");

	Params::ABP_Creature_NPC_Human_C_GetClothes_Jewelry_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (JewelryComponent != nullptr)
		*JewelryComponent = Parms.JewelryComponent;

}


// Function BP_Creature_NPC_Human.BP_Creature_NPC_Human_C.GetClothes_Gloves
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      GlovesComponent                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_Human_C::GetClothes_Gloves(class USkeletalMeshComponent** GlovesComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Human_C", "GetClothes_Gloves");

	Params::ABP_Creature_NPC_Human_C_GetClothes_Gloves_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (GlovesComponent != nullptr)
		*GlovesComponent = Parms.GlovesComponent;

}


// Function BP_Creature_NPC_Human.BP_Creature_NPC_Human_C.GetClothes_Glasses
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      GlassesComponent                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_Human_C::GetClothes_Glasses(class USkeletalMeshComponent** GlassesComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Human_C", "GetClothes_Glasses");

	Params::ABP_Creature_NPC_Human_C_GetClothes_Glasses_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (GlassesComponent != nullptr)
		*GlassesComponent = Parms.GlassesComponent;

}


// Function BP_Creature_NPC_Human.BP_Creature_NPC_Human_C.GetCLothes_Gear
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      Gear                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_Human_C::GetCLothes_Gear(class USkeletalMeshComponent** Gear)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Human_C", "GetCLothes_Gear");

	Params::ABP_Creature_NPC_Human_C_GetCLothes_Gear_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Gear != nullptr)
		*Gear = Parms.Gear;

}


// Function BP_Creature_NPC_Human.BP_Creature_NPC_Human_C.GetClothes_Bottom
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      PantsComponent                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_Human_C::GetClothes_Bottom(class USkeletalMeshComponent** PantsComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Human_C", "GetClothes_Bottom");

	Params::ABP_Creature_NPC_Human_C_GetClothes_Bottom_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PantsComponent != nullptr)
		*PantsComponent = Parms.PantsComponent;

}


// Function BP_Creature_NPC_Human.BP_Creature_NPC_Human_C.GetClothes_Head
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      HatComponent                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_Human_C::GetClothes_Head(class USkeletalMeshComponent** HatComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Human_C", "GetClothes_Head");

	Params::ABP_Creature_NPC_Human_C_GetClothes_Head_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (HatComponent != nullptr)
		*HatComponent = Parms.HatComponent;

}


// Function BP_Creature_NPC_Human.BP_Creature_NPC_Human_C.GetClothes_Boots
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      ShoesComponent                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_Human_C::GetClothes_Boots(class USkeletalMeshComponent** ShoesComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Human_C", "GetClothes_Boots");

	Params::ABP_Creature_NPC_Human_C_GetClothes_Boots_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ShoesComponent != nullptr)
		*ShoesComponent = Parms.ShoesComponent;

}


// Function BP_Creature_NPC_Human.BP_Creature_NPC_Human_C.GetClothes_Torso
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      TorsoComponent                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_Human_C::GetClothes_Torso(class USkeletalMeshComponent** TorsoComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Human_C", "GetClothes_Torso");

	Params::ABP_Creature_NPC_Human_C_GetClothes_Torso_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TorsoComponent != nullptr)
		*TorsoComponent = Parms.TorsoComponent;

}


// Function BP_Creature_NPC_Human.BP_Creature_NPC_Human_C.GetBody
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      BodyComponent                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_Human_C::GetBody(class USkeletalMeshComponent** BodyComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Human_C", "GetBody");

	Params::ABP_Creature_NPC_Human_C_GetBody_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (BodyComponent != nullptr)
		*BodyComponent = Parms.BodyComponent;

}


// Function BP_Creature_NPC_Human.BP_Creature_NPC_Human_C.CanInteractWithActor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               InteractAvailable                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanInteractWithActor_InteractAvailable                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_Human_C::CanInteractWithActor(class AController* Controller, const struct FInteractionData& InteractionData, bool* InteractAvailable, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_CanInteractWithActor_InteractAvailable, bool CallFunc_ActorHasTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Human_C", "CanInteractWithActor");

	Params::ABP_Creature_NPC_Human_C_CanInteractWithActor_Params Parms{};

	Parms.Controller = Controller;
	Parms.InteractionData = InteractionData;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_CanInteractWithActor_InteractAvailable = CallFunc_CanInteractWithActor_InteractAvailable;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractAvailable != nullptr)
		*InteractAvailable = Parms.InteractAvailable;

}


// Function BP_Creature_NPC_Human.BP_Creature_NPC_Human_C.GetInteractText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// class FString                      InteractText                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetInteractText_InteractText                            (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void ABP_Creature_NPC_Human_C::GetInteractText(const struct FInteractionData& InteractionData, class FString* InteractText, const struct FGameplayTag& Temp_struct_Variable, const class FString& CallFunc_GetInteractText_InteractText, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Human_C", "GetInteractText");

	Params::ABP_Creature_NPC_Human_C_GetInteractText_Params Parms{};

	Parms.InteractionData = InteractionData;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetInteractText_InteractText = CallFunc_GetInteractText_InteractText;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractText != nullptr)
		*InteractText = std::move(Parms.InteractText);

}


// Function BP_Creature_NPC_Human.BP_Creature_NPC_Human_C.ReturnMeshToHighlight
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// TArray<class UStaticMeshComponent*>StaticMesh_to_Highlight                                          (Parm, OutParm, ContainsInstancedReference)
// TArray<class USkeletalMeshComponent*>SkeletalMesh_to_Highlight                                        (Parm, OutParm, ContainsInstancedReference)
// bool                               Hostile_                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemQuality            Quality                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USkeletalMeshComponent*>LAppendArray                                                     (Edit, BlueprintVisible, ContainsInstancedReference)
// TArray<class UStaticMeshComponent*>CallFunc_ReturnMeshToHighlight_StaticMesh_to_Highlight           (ReferenceParm, ContainsInstancedReference)
// TArray<class USkeletalMeshComponent*>CallFunc_ReturnMeshToHighlight_SkeletalMesh_to_Highlight         (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_ReturnMeshToHighlight_Hostile_                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemQuality            CallFunc_ReturnMeshToHighlight_Quality                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USkeletalMeshComponent*>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, ContainsInstancedReference)

void ABP_Creature_NPC_Human_C::ReturnMeshToHighlight(const struct FInteractionData& InteractionData, TArray<class UStaticMeshComponent*>* StaticMesh_to_Highlight, TArray<class USkeletalMeshComponent*>* SkeletalMesh_to_Highlight, bool* Hostile_, enum class EItemQuality* Quality, const TArray<class USkeletalMeshComponent*>& LAppendArray, TArray<class UStaticMeshComponent*>& CallFunc_ReturnMeshToHighlight_StaticMesh_to_Highlight, TArray<class USkeletalMeshComponent*>& CallFunc_ReturnMeshToHighlight_SkeletalMesh_to_Highlight, bool CallFunc_ReturnMeshToHighlight_Hostile_, enum class EItemQuality CallFunc_ReturnMeshToHighlight_Quality, TArray<class USkeletalMeshComponent*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Human_C", "ReturnMeshToHighlight");

	Params::ABP_Creature_NPC_Human_C_ReturnMeshToHighlight_Params Parms{};

	Parms.InteractionData = InteractionData;
	Parms.LAppendArray = LAppendArray;
	Parms.CallFunc_ReturnMeshToHighlight_StaticMesh_to_Highlight = CallFunc_ReturnMeshToHighlight_StaticMesh_to_Highlight;
	Parms.CallFunc_ReturnMeshToHighlight_SkeletalMesh_to_Highlight = CallFunc_ReturnMeshToHighlight_SkeletalMesh_to_Highlight;
	Parms.CallFunc_ReturnMeshToHighlight_Hostile_ = CallFunc_ReturnMeshToHighlight_Hostile_;
	Parms.CallFunc_ReturnMeshToHighlight_Quality = CallFunc_ReturnMeshToHighlight_Quality;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (StaticMesh_to_Highlight != nullptr)
		*StaticMesh_to_Highlight = std::move(Parms.StaticMesh_to_Highlight);

	if (SkeletalMesh_to_Highlight != nullptr)
		*SkeletalMesh_to_Highlight = std::move(Parms.SkeletalMesh_to_Highlight);

	if (Hostile_ != nullptr)
		*Hostile_ = Parms.Hostile_;

	if (Quality != nullptr)
		*Quality = Parms.Quality;

}


// Function BP_Creature_NPC_Human.BP_Creature_NPC_Human_C.Load NPC Data
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         NPC_Data                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         SelectedAppearanceHandle                                         (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         DefaultNPCAppearance                                             (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNWXNPCHumanData            CallFunc_GetNPCHumanDataFromDataTableRow_OutNPCHumanData         (None)
// enum class ENPCBlueprintHelperGetResultCallFunc_GetNPCHumanDataFromDataTableRow_Branches                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetNPCHumanDataFromDataTableRow_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class FName                        CallFunc_Array_Random_OutItem                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Random_OutIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesDataTableRowExist_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void ABP_Creature_NPC_Human_C::Load_NPC_Data(const struct FDataTableRowHandle& NPC_Data, const struct FDataTableRowHandle& SelectedAppearanceHandle, const struct FDataTableRowHandle& DefaultNPCAppearance, bool CallFunc_HasAuthority_ReturnValue, const struct FNWXNPCHumanData& CallFunc_GetNPCHumanDataFromDataTableRow_OutNPCHumanData, enum class ENPCBlueprintHelperGetResult CallFunc_GetNPCHumanDataFromDataTableRow_Branches, bool CallFunc_GetNPCHumanDataFromDataTableRow_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, bool CallFunc_DoesDataTableRowExist_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Human_C", "Load NPC Data");

	Params::ABP_Creature_NPC_Human_C_Load_NPC_Data_Params Parms{};

	Parms.NPC_Data = NPC_Data;
	Parms.SelectedAppearanceHandle = SelectedAppearanceHandle;
	Parms.DefaultNPCAppearance = DefaultNPCAppearance;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetNPCHumanDataFromDataTableRow_OutNPCHumanData = CallFunc_GetNPCHumanDataFromDataTableRow_OutNPCHumanData;
	Parms.CallFunc_GetNPCHumanDataFromDataTableRow_Branches = CallFunc_GetNPCHumanDataFromDataTableRow_Branches;
	Parms.CallFunc_GetNPCHumanDataFromDataTableRow_ReturnValue = CallFunc_GetNPCHumanDataFromDataTableRow_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Random_OutItem = CallFunc_Array_Random_OutItem;
	Parms.CallFunc_Array_Random_OutIndex = CallFunc_Array_Random_OutIndex;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.CallFunc_DoesDataTableRowExist_ReturnValue = CallFunc_DoesDataTableRowExist_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_NPC_Human.BP_Creature_NPC_Human_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Creature_NPC_Human_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Human_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Creature_NPC_Human.BP_Creature_NPC_Human_C.CrossServerSendGameplayEventToActor
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EventTag                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          Payload                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_Creature_NPC_Human_C::CrossServerSendGameplayEventToActor(struct FGameplayTag& EventTag, struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Human_C", "CrossServerSendGameplayEventToActor");

	Params::ABP_Creature_NPC_Human_C_CrossServerSendGameplayEventToActor_Params Parms{};

	Parms.EventTag = EventTag;
	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_NPC_Human.BP_Creature_NPC_Human_C.Revive
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Creature_NPC_Human_C::Revive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Human_C", "Revive");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Creature_NPC_Human.BP_Creature_NPC_Human_C.OnHealthChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_Human_C::OnHealthChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Human_C", "OnHealthChanged");

	Params::ABP_Creature_NPC_Human_C_OnHealthChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_NPC_Human.BP_Creature_NPC_Human_C.PerformClientSideInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_Human_C::PerformClientSideInteraction(class AController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Human_C", "PerformClientSideInteraction");

	Params::ABP_Creature_NPC_Human_C_PerformClientSideInteraction_Params Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_NPC_Human.BP_Creature_NPC_Human_C.ExecuteUbergraph_BP_Creature_NPC_Human
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_1                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_2                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_3                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_NPCAnimation_C>K2Node_DynamicCast_AsBPI_NPCAnimation                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_4                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_EventTag                                            (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_Payload                                             (ConstParm)
// struct FGameplayTag                Temp_struct_Variable_5                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SendGameplayEventToActor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_Event_Controller                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_6                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_Human_C::ExecuteUbergraph_BP_Creature_NPC_Human(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, const struct FGameplayTag& Temp_struct_Variable_2, const struct FGameplayTag& Temp_struct_Variable_3, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, TScriptInterface<class IBPI_NPCAnimation_C> K2Node_DynamicCast_AsBPI_NPCAnimation, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTag& Temp_struct_Variable_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, const struct FGameplayTag& K2Node_Event_EventTag, const struct FGameplayEventData& K2Node_Event_Payload, const struct FGameplayTag& Temp_struct_Variable_5, int32 CallFunc_SendGameplayEventToActor_ReturnValue, float K2Node_Event_Delta, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, class AController* K2Node_Event_Controller, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_3, const struct FGameplayTag& Temp_struct_Variable_6, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_ActorHasTag_ReturnValue_4, double CallFunc_Greater_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Human_C", "ExecuteUbergraph_BP_Creature_NPC_Human");

	Params::ABP_Creature_NPC_Human_C_ExecuteUbergraph_BP_Creature_NPC_Human_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_NPCAnimation = K2Node_DynamicCast_AsBPI_NPCAnimation;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.K2Node_Event_EventTag = K2Node_Event_EventTag;
	Parms.K2Node_Event_Payload = K2Node_Event_Payload;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.CallFunc_SendGameplayEventToActor_ReturnValue = CallFunc_SendGameplayEventToActor_ReturnValue;
	Parms.K2Node_Event_Delta = K2Node_Event_Delta;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue = CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue_1 = CallFunc_ActorHasTag_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue_2 = CallFunc_ActorHasTag_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_Controller = K2Node_Event_Controller;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue_3 = CallFunc_ActorHasTag_ReturnValue_3;
	Parms.Temp_struct_Variable_6 = Temp_struct_Variable_6;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_ActorHasTag_ReturnValue_4 = CallFunc_ActorHasTag_ReturnValue_4;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_NPC_Human.BP_Creature_NPC_Human_C.OnEquipmentChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Creature_NPC_Human_C::OnEquipmentChange__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Human_C", "OnEquipmentChange__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Creature_NPC_Human.BP_Creature_NPC_Human_C.OnIsDownChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDown_                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_Human_C::OnIsDownChange__DelegateSignature(bool IsDown_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Human_C", "OnIsDownChange__DelegateSignature");

	Params::ABP_Creature_NPC_Human_C_OnIsDownChange__DelegateSignature_Params Parms{};

	Parms.IsDown_ = IsDown_;

	UObject::ProcessEvent(Func, &Parms);

}

}


