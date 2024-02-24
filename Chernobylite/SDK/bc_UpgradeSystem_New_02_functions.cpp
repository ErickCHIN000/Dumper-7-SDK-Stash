#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bc_UpgradeSystem_New_02.bc_UpgradeSystem_New_02_C
// (SceneComponent)

class UClass* Ubc_UpgradeSystem_New_02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bc_UpgradeSystem_New_02_C");

	return Clss;
}


// bc_UpgradeSystem_New_02_C bc_UpgradeSystem_New_02.Default__bc_UpgradeSystem_New_02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Ubc_UpgradeSystem_New_02_C* Ubc_UpgradeSystem_New_02_C::GetDefaultObj()
{
	static class Ubc_UpgradeSystem_New_02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Ubc_UpgradeSystem_New_02_C*>(Ubc_UpgradeSystem_New_02_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bc_UpgradeSystem_New_02.bc_UpgradeSystem_New_02_C.GetWeaponType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGunChoice              WeaponType                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class Aba_aa_ak47_00_C>K2Node_ClassDynamicCast_AsBa_Aa_Ak_47_00                         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class Aba_aa_mp133_00_C>K2Node_ClassDynamicCast_AsBa_Aa_Mp_133_00                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class Aba_aa_nagant_00_C>K2Node_ClassDynamicCast_AsBa_Aa_Nagant_00                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGunChoice              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGunChoice              Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGunChoice              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGunChoice              Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGunChoice              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGunChoice              Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGunChoice              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubc_UpgradeSystem_New_02_C::GetWeaponType(class UClass* Weapon, enum class EGunChoice* WeaponType, bool Temp_bool_Variable, TSubclassOf<class Aba_aa_ak47_00_C> K2Node_ClassDynamicCast_AsBa_Aa_Ak_47_00, bool K2Node_ClassDynamicCast_bSuccess, TSubclassOf<class Aba_aa_mp133_00_C> K2Node_ClassDynamicCast_AsBa_Aa_Mp_133_00, bool K2Node_ClassDynamicCast_bSuccess_1, TSubclassOf<class Aba_aa_nagant_00_C> K2Node_ClassDynamicCast_AsBa_Aa_Nagant_00, bool K2Node_ClassDynamicCast_bSuccess_2, enum class EGunChoice Temp_byte_Variable, enum class EGunChoice Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class EGunChoice K2Node_Select_Default, enum class EGunChoice Temp_byte_Variable_2, bool Temp_bool_Variable_2, enum class EGunChoice K2Node_Select_Default_1, enum class EGunChoice Temp_byte_Variable_3, enum class EGunChoice K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_UpgradeSystem_New_02_C", "GetWeaponType");

	Params::Ubc_UpgradeSystem_New_02_C_GetWeaponType_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_ClassDynamicCast_AsBa_Aa_Ak_47_00 = K2Node_ClassDynamicCast_AsBa_Aa_Ak_47_00;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_ClassDynamicCast_AsBa_Aa_Mp_133_00 = K2Node_ClassDynamicCast_AsBa_Aa_Mp_133_00;
	Parms.K2Node_ClassDynamicCast_bSuccess_1 = K2Node_ClassDynamicCast_bSuccess_1;
	Parms.K2Node_ClassDynamicCast_AsBa_Aa_Nagant_00 = K2Node_ClassDynamicCast_AsBa_Aa_Nagant_00;
	Parms.K2Node_ClassDynamicCast_bSuccess_2 = K2Node_ClassDynamicCast_bSuccess_2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

	if (WeaponType != nullptr)
		*WeaponType = Parms.WeaponType;

}


// Function bc_UpgradeSystem_New_02.bc_UpgradeSystem_New_02_C.InitWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGunChoice              NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Upgrades_Main_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_UpgradeSystem_Base_00_C* K2Node_DynamicCast_AsBa_Upgrade_System_Base_00                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubc_UpgradeSystem_New_02_C::InitWidget(enum class EGunChoice NewParam, class UWid_Upgrades_Main_C* CallFunc_Create_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class Aba_UpgradeSystem_Base_00_C* K2Node_DynamicCast_AsBa_Upgrade_System_Base_00, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_UpgradeSystem_New_02_C", "InitWidget");

	Params::Ubc_UpgradeSystem_New_02_C_InitWidget_Params Parms{};

	Parms.NewParam = NewParam;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBa_Upgrade_System_Base_00 = K2Node_DynamicCast_AsBa_Upgrade_System_Base_00;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bc_UpgradeSystem_New_02.bc_UpgradeSystem_New_02_C.Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGunChoice              GunType                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsOnField                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubc_UpgradeSystem_New_02_C::Start(enum class EGunChoice GunType, bool IsOnField)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_UpgradeSystem_New_02_C", "Start");

	Params::Ubc_UpgradeSystem_New_02_C_Start_Params Parms{};

	Parms.GunType = GunType;
	Parms.IsOnField = IsOnField;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bc_UpgradeSystem_New_02.bc_UpgradeSystem_New_02_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*        Mesh                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubc_UpgradeSystem_New_02_C::Initialize(class UStaticMeshComponent* Mesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_UpgradeSystem_New_02_C", "Initialize");

	Params::Ubc_UpgradeSystem_New_02_C_Initialize_Params Parms{};

	Parms.Mesh = Mesh;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bc_UpgradeSystem_New_02.bc_UpgradeSystem_New_02_C.End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Ubc_UpgradeSystem_New_02_C::End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_UpgradeSystem_New_02_C", "End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bc_UpgradeSystem_New_02.bc_UpgradeSystem_New_02_C.NextTab
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Ubc_UpgradeSystem_New_02_C::NextTab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_UpgradeSystem_New_02_C", "NextTab");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bc_UpgradeSystem_New_02.bc_UpgradeSystem_New_02_C.PreviousTab
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Ubc_UpgradeSystem_New_02_C::PreviousTab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_UpgradeSystem_New_02_C", "PreviousTab");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bc_UpgradeSystem_New_02.bc_UpgradeSystem_New_02_C.LeftItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Ubc_UpgradeSystem_New_02_C::LeftItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_UpgradeSystem_New_02_C", "LeftItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bc_UpgradeSystem_New_02.bc_UpgradeSystem_New_02_C.RightItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Ubc_UpgradeSystem_New_02_C::RightItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_UpgradeSystem_New_02_C", "RightItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bc_UpgradeSystem_New_02.bc_UpgradeSystem_New_02_C.Craft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Ubc_UpgradeSystem_New_02_C::Craft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_UpgradeSystem_New_02_C", "Craft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bc_UpgradeSystem_New_02.bc_UpgradeSystem_New_02_C.NewSelectionUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FName                        ItemUniqueID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubc_UpgradeSystem_New_02_C::NewSelectionUI(class FName ItemId, const struct FInventoryEntry& Item, class FName ItemUniqueID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_UpgradeSystem_New_02_C", "NewSelectionUI");

	Params::Ubc_UpgradeSystem_New_02_C_NewSelectionUI_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.Item = Item;
	Parms.ItemUniqueID = ItemUniqueID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bc_UpgradeSystem_New_02.bc_UpgradeSystem_New_02_C.Back
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Ubc_UpgradeSystem_New_02_C::Back()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_UpgradeSystem_New_02_C", "Back");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bc_UpgradeSystem_New_02.bc_UpgradeSystem_New_02_C.GoBackUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Ubc_UpgradeSystem_New_02_C::GoBackUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_UpgradeSystem_New_02_C", "GoBackUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bc_UpgradeSystem_New_02.bc_UpgradeSystem_New_02_C.DestroySpawnedItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Ubc_UpgradeSystem_New_02_C::DestroySpawnedItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_UpgradeSystem_New_02_C", "DestroySpawnedItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bc_UpgradeSystem_New_02.bc_UpgradeSystem_New_02_C.ExecuteUbergraph_bc_UpgradeSystem_New_02
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasEnoughMaterials_Result                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGWeapon*                   K2Node_DynamicCast_AsCGWeapon                                    (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGunChoice              K2Node_CustomEvent_GunType                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsOnField                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        K2Node_CustomEvent_Mesh                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ItemID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             K2Node_CustomEvent_Item                                          (None)
// class FName                        K2Node_CustomEvent_ItemUniqueID                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             K2Node_MakeStruct_InventoryEntry                                 (UObjectWrapper)
// bool                               CallFunc_GetItemInfo_IsValid                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemEntry                  CallFunc_GetItemInfo_ReturnValue                                 (None)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_LoadClassAsset_Blocking_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class AActor>          K2Node_ClassDynamicCast_AsActor                                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class ACGWeapon>       K2Node_ClassDynamicCast_AsCGWeapon                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGunChoice              CallFunc_GetWeaponType_WeaponType                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInteractable>K2Node_DynamicCast_AsInteractable                                (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsObjectVisible_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryEntry             CallFunc_GetInventoryItemByName_NewParam                         (None)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetUpgrades_ReturnValue                                 (ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetItemUnderIndex_ID                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetItemUnderIndex_UniqueID                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetItemUnderIndex_InventoryPosition                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetItemUnderIndex_SocketName                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetItemUnderIndex_SocketOffset                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetItemUnderIndex_SocketRotationOffset                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EUpgradeType            CallFunc_GetItemUnderIndex_UpgradeType                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetItems_ReturnValue                                    (ReferenceParm)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_GetUpgrades_ReturnValue_1                               (ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemInfo_IsValid_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemEntry                  CallFunc_GetItemInfo_ReturnValue_1                               (None)
// class AActor*                      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGWeapon*                   K2Node_DynamicCast_AsCGWeapon_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UActorComponent*>     CallFunc_GetComponentsByTag_ReturnValue                          (ReferenceParm, ContainsInstancedReference)
// class UActorComponent*             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             K2Node_DynamicCast_AsScene_Component                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetRelativeTransform_ReturnValue                        (IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_GetCraftedUpgrades_ReturnValue                          (ReferenceParm)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_2                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_3                             (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult_1                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult_2                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInteractable>K2Node_DynamicCast_AsInteractable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HideShowActiveItem_OutActionSuccessful                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubc_UpgradeSystem_New_02_C::ExecuteUbergraph_bc_UpgradeSystem_New_02(int32 EntryPoint, bool CallFunc_HasEnoughMaterials_Result, class ACGWeapon* K2Node_DynamicCast_AsCGWeapon, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, enum class EGunChoice K2Node_CustomEvent_GunType, bool K2Node_CustomEvent_IsOnField, class UStaticMeshComponent* K2Node_CustomEvent_Mesh, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class FName K2Node_CustomEvent_ItemID, const struct FInventoryEntry& K2Node_CustomEvent_Item, class FName K2Node_CustomEvent_ItemUniqueID, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, const struct FInventoryEntry& K2Node_MakeStruct_InventoryEntry, bool CallFunc_GetItemInfo_IsValid, const struct FItemEntry& CallFunc_GetItemInfo_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, TSubclassOf<class AActor> K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, TSubclassOf<class ACGWeapon> K2Node_ClassDynamicCast_AsCGWeapon, bool K2Node_ClassDynamicCast_bSuccess_1, enum class EGunChoice CallFunc_GetWeaponType_WeaponType, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, bool CallFunc_SetStaticMesh_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, TScriptInterface<class IInteractable> K2Node_DynamicCast_AsInteractable, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsObjectVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FInventoryEntry& CallFunc_GetInventoryItemByName_NewParam, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, int32 Temp_int_Loop_Counter_Variable_2, TArray<class FName>& CallFunc_GetUpgrades_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, class FName CallFunc_GetItemUnderIndex_ID, class FName CallFunc_GetItemUnderIndex_UniqueID, const struct FVector2D& CallFunc_GetItemUnderIndex_InventoryPosition, class FName CallFunc_GetItemUnderIndex_SocketName, const struct FVector& CallFunc_GetItemUnderIndex_SocketOffset, const struct FRotator& CallFunc_GetItemUnderIndex_SocketRotationOffset, enum class EUpgradeType CallFunc_GetItemUnderIndex_UpgradeType, TArray<struct FInventoryEntry>& CallFunc_GetItems_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue, TArray<class FName>& CallFunc_GetUpgrades_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_GetItemInfo_IsValid_1, const struct FItemEntry& CallFunc_GetItemInfo_ReturnValue_1, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class ACGWeapon* K2Node_DynamicCast_AsCGWeapon_1, bool K2Node_DynamicCast_bSuccess_2, TArray<class UActorComponent*>& CallFunc_GetComponentsByTag_ReturnValue, class UActorComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, class USceneComponent* K2Node_DynamicCast_AsScene_Component, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_Less_IntInt_ReturnValue_2, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, TArray<class FName>& CallFunc_GetCraftedUpgrades_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_Array_Contains_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, const struct FTransform& CallFunc_MakeTransform_ReturnValue_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue_3, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult_1, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult_2, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, TScriptInterface<class IInteractable> K2Node_DynamicCast_AsInteractable_1, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_NotEqual_NameName_ReturnValue, int32 Temp_int_Array_Index_Variable_2, class FName CallFunc_Array_Get_Item_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7, bool CallFunc_HideShowActiveItem_OutActionSuccessful, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_UpgradeSystem_New_02_C", "ExecuteUbergraph_bc_UpgradeSystem_New_02");

	Params::Ubc_UpgradeSystem_New_02_C_ExecuteUbergraph_bc_UpgradeSystem_New_02_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasEnoughMaterials_Result = CallFunc_HasEnoughMaterials_Result;
	Parms.K2Node_DynamicCast_AsCGWeapon = K2Node_DynamicCast_AsCGWeapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_CustomEvent_GunType = K2Node_CustomEvent_GunType;
	Parms.K2Node_CustomEvent_IsOnField = K2Node_CustomEvent_IsOnField;
	Parms.K2Node_CustomEvent_Mesh = K2Node_CustomEvent_Mesh;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.K2Node_CustomEvent_ItemID = K2Node_CustomEvent_ItemID;
	Parms.K2Node_CustomEvent_Item = K2Node_CustomEvent_Item;
	Parms.K2Node_CustomEvent_ItemUniqueID = K2Node_CustomEvent_ItemUniqueID;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.K2Node_MakeStruct_InventoryEntry = K2Node_MakeStruct_InventoryEntry;
	Parms.CallFunc_GetItemInfo_IsValid = CallFunc_GetItemInfo_IsValid;
	Parms.CallFunc_GetItemInfo_ReturnValue = CallFunc_GetItemInfo_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2;
	Parms.CallFunc_LoadClassAsset_Blocking_ReturnValue = CallFunc_LoadClassAsset_Blocking_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsActor = K2Node_ClassDynamicCast_AsActor;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_ClassDynamicCast_AsCGWeapon = K2Node_ClassDynamicCast_AsCGWeapon;
	Parms.K2Node_ClassDynamicCast_bSuccess_1 = K2Node_ClassDynamicCast_bSuccess_1;
	Parms.CallFunc_GetWeaponType_WeaponType = CallFunc_GetWeaponType_WeaponType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsInteractable = K2Node_DynamicCast_AsInteractable;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsObjectVisible_ReturnValue = CallFunc_IsObjectVisible_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue = CallFunc_NotEqual_ClassClass_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetInventoryItemByName_NewParam = CallFunc_GetInventoryItemByName_NewParam;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_GetUpgrades_ReturnValue = CallFunc_GetUpgrades_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5;
	Parms.CallFunc_GetItemUnderIndex_ID = CallFunc_GetItemUnderIndex_ID;
	Parms.CallFunc_GetItemUnderIndex_UniqueID = CallFunc_GetItemUnderIndex_UniqueID;
	Parms.CallFunc_GetItemUnderIndex_InventoryPosition = CallFunc_GetItemUnderIndex_InventoryPosition;
	Parms.CallFunc_GetItemUnderIndex_SocketName = CallFunc_GetItemUnderIndex_SocketName;
	Parms.CallFunc_GetItemUnderIndex_SocketOffset = CallFunc_GetItemUnderIndex_SocketOffset;
	Parms.CallFunc_GetItemUnderIndex_SocketRotationOffset = CallFunc_GetItemUnderIndex_SocketRotationOffset;
	Parms.CallFunc_GetItemUnderIndex_UpgradeType = CallFunc_GetItemUnderIndex_UpgradeType;
	Parms.CallFunc_GetItems_ReturnValue = CallFunc_GetItems_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetUpgrades_ReturnValue_1 = CallFunc_GetUpgrades_ReturnValue_1;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_GetItemInfo_IsValid_1 = CallFunc_GetItemInfo_IsValid_1;
	Parms.CallFunc_GetItemInfo_ReturnValue_1 = CallFunc_GetItemInfo_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsCGWeapon_1 = K2Node_DynamicCast_AsCGWeapon_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetComponentsByTag_ReturnValue = CallFunc_GetComponentsByTag_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsScene_Component = K2Node_DynamicCast_AsScene_Component;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_GetRelativeTransform_ReturnValue = CallFunc_GetRelativeTransform_ReturnValue;
	Parms.CallFunc_GetCraftedUpgrades_ReturnValue = CallFunc_GetCraftedUpgrades_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult = CallFunc_K2_SetRelativeTransform_SweepHitResult;
	Parms.CallFunc_MakeTransform_ReturnValue_2 = CallFunc_MakeTransform_ReturnValue_2;
	Parms.CallFunc_MakeTransform_ReturnValue_3 = CallFunc_MakeTransform_ReturnValue_3;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult_1 = CallFunc_K2_SetRelativeTransform_SweepHitResult_1;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult_2 = CallFunc_K2_SetRelativeTransform_SweepHitResult_2;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_DynamicCast_AsInteractable_1 = K2Node_DynamicCast_AsInteractable_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7;
	Parms.CallFunc_HideShowActiveItem_OutActionSuccessful = CallFunc_HideShowActiveItem_OutActionSuccessful;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bc_UpgradeSystem_New_02.bc_UpgradeSystem_New_02_C.GoBack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void Ubc_UpgradeSystem_New_02_C::GoBack__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_UpgradeSystem_New_02_C", "GoBack__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


