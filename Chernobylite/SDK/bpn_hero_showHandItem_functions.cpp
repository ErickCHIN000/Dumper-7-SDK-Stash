#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bpn_hero_showHandItem.bpn_hero_showHandItem_C
// (None)

class UClass* Ubpn_hero_showHandItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bpn_hero_showHandItem_C");

	return Clss;
}


// bpn_hero_showHandItem_C bpn_hero_showHandItem.Default__bpn_hero_showHandItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Ubpn_hero_showHandItem_C* Ubpn_hero_showHandItem_C::GetDefaultObj()
{
	static class Ubpn_hero_showHandItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Ubpn_hero_showHandItem_C*>(Ubpn_hero_showHandItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bpn_hero_showHandItem.bpn_hero_showHandItem_C.ResetSkinMaterialsStaticMesh
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UStaticMeshComponent*        StaticMeshComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumMaterials_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubpn_hero_showHandItem_C::ResetSkinMaterialsStaticMesh(class UStaticMeshComponent* StaticMeshComponent, int32 CallFunc_GetNumMaterials_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bpn_hero_showHandItem_C", "ResetSkinMaterialsStaticMesh");

	Params::Ubpn_hero_showHandItem_C_ResetSkinMaterialsStaticMesh_Params Parms{};

	Parms.StaticMeshComponent = StaticMeshComponent;
	Parms.CallFunc_GetNumMaterials_ReturnValue = CallFunc_GetNumMaterials_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bpn_hero_showHandItem.bpn_hero_showHandItem_C.UpdateSkinStaticMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UStaticMeshComponent*        StaticMeshComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAttachmentSkinInfo         SkinInfo                                                         (Edit, BlueprintVisible)
// class ACGWeapon*                   Weapon                                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               ReplacedAlready                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_GetWeaponSkinByType_OutSuccess                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWeaponSkinInfo             CallFunc_K2_GetWeaponSkinByType_ReturnValue                      (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UStaticMesh>  CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AMainPawnCpp*                CallFunc_GetCGPawnBase_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGWeapon*                   K2Node_DynamicCast_AsCGWeapon                                    (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_FindFirstContaining_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponSkinType         CallFunc_ItemIdToWeaponSkinType_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_GetWeaponSkinByType_OutSuccess_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWeaponSkinInfo             CallFunc_K2_GetWeaponSkinByType_ReturnValue_1                    (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAttachmentSkinInfo         CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKnifeSkinInfo              CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UMaterialInterface>CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_DynamicCast_AsMaterial_Interface                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 K2Node_DynamicCast_AsStatic_Mesh                                 (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UStaticMesh>  CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_1          (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubpn_hero_showHandItem_C::UpdateSkinStaticMesh(class UStaticMeshComponent* StaticMeshComponent, const struct FAttachmentSkinInfo& SkinInfo, class ACGWeapon* Weapon, bool ReplacedAlready, int32 Temp_int_Loop_Counter_Variable, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_K2_GetWeaponSkinByType_OutSuccess, const struct FWeaponSkinInfo& CallFunc_K2_GetWeaponSkinByType_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, TSoftObjectPtr<class UStaticMesh> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AMainPawnCpp* CallFunc_GetCGPawnBase_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, class ACGWeapon* K2Node_DynamicCast_AsCGWeapon, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_FindFirstContaining_ReturnValue, enum class EWeaponSkinType CallFunc_ItemIdToWeaponSkinType_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_K2_GetWeaponSkinByType_OutSuccess_1, const struct FWeaponSkinInfo& CallFunc_K2_GetWeaponSkinByType_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FAttachmentSkinInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, const struct FKnifeSkinInfo& CallFunc_Array_Get_Item, bool CallFunc_Array_Contains_ReturnValue, TSoftObjectPtr<class UMaterialInterface> CallFunc_Array_Get_Item_1, bool CallFunc_BooleanOR_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UMaterialInterface* K2Node_DynamicCast_AsMaterial_Interface, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_SetStaticMesh_ReturnValue, TSoftObjectPtr<class UStaticMesh> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bpn_hero_showHandItem_C", "UpdateSkinStaticMesh");

	Params::Ubpn_hero_showHandItem_C_UpdateSkinStaticMesh_Params Parms{};

	Parms.StaticMeshComponent = StaticMeshComponent;
	Parms.SkinInfo = SkinInfo;
	Parms.Weapon = Weapon;
	Parms.ReplacedAlready = ReplacedAlready;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetWeaponSkinByType_OutSuccess = CallFunc_K2_GetWeaponSkinByType_OutSuccess;
	Parms.CallFunc_K2_GetWeaponSkinByType_ReturnValue = CallFunc_K2_GetWeaponSkinByType_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetCGPawnBase_ReturnValue = CallFunc_GetCGPawnBase_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.K2Node_DynamicCast_AsCGWeapon = K2Node_DynamicCast_AsCGWeapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_FindFirstContaining_ReturnValue = CallFunc_FindFirstContaining_ReturnValue;
	Parms.CallFunc_ItemIdToWeaponSkinType_ReturnValue = CallFunc_ItemIdToWeaponSkinType_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_K2_GetWeaponSkinByType_OutSuccess_1 = CallFunc_K2_GetWeaponSkinByType_OutSuccess_1;
	Parms.CallFunc_K2_GetWeaponSkinByType_ReturnValue_1 = CallFunc_K2_GetWeaponSkinByType_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_DynamicCast_AsMaterial_Interface = K2Node_DynamicCast_AsMaterial_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_1 = CallFunc_LoadAsset_Blocking_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsStatic_Mesh = K2Node_DynamicCast_AsStatic_Mesh;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_1 = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_1;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bpn_hero_showHandItem.bpn_hero_showHandItem_C.Received_NotifyTick
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FrameDeltaTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               Hero                                                             (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CurveScale                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGFakeHero*                 K2Node_DynamicCast_AsCGFake_Hero                                 (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               K2Node_DynamicCast_AsCh_Hero_00                                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EHandItemIndex          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCurveValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool Ubpn_hero_showHandItem_C::Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, class ACh_Hero_00_C* Hero, float CurveScale, class AActor* CallFunc_GetOwner_ReturnValue, class ACGFakeHero* K2Node_DynamicCast_AsCGFake_Hero, bool K2Node_DynamicCast_bSuccess, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* K2Node_DynamicCast_AsCh_Hero_00, bool K2Node_DynamicCast_bSuccess_1, enum class EHandItemIndex Temp_byte_Variable, class USkeletalMeshComponent* K2Node_Select_Default, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetCurveValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bpn_hero_showHandItem_C", "Received_NotifyTick");

	Params::Ubpn_hero_showHandItem_C_Received_NotifyTick_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.FrameDeltaTime = FrameDeltaTime;
	Parms.Hero = Hero;
	Parms.CurveScale = CurveScale;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsCGFake_Hero = K2Node_DynamicCast_AsCGFake_Hero;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.K2Node_DynamicCast_AsCh_Hero_00 = K2Node_DynamicCast_AsCh_Hero_00;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetCurveValue_ReturnValue = CallFunc_GetCurveValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function bpn_hero_showHandItem.bpn_hero_showHandItem_C.Received_NotifyEnd
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               Hero                                                             (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHandItemIndex          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGFakeHero*                 K2Node_DynamicCast_AsCGFake_Hero                                 (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               K2Node_DynamicCast_AsCh_Hero_00                                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHandItemIndex          Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkinnedMeshComponent*       K2Node_Select_Default_1                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool Ubpn_hero_showHandItem_C::Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class ACh_Hero_00_C* Hero, enum class EHandItemIndex Temp_byte_Variable, class AActor* CallFunc_GetOwner_ReturnValue, class ACGFakeHero* K2Node_DynamicCast_AsCGFake_Hero, bool K2Node_DynamicCast_bSuccess, class ACh_Hero_00_C* K2Node_DynamicCast_AsCh_Hero_00, bool K2Node_DynamicCast_bSuccess_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, enum class EHandItemIndex Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UStaticMeshComponent* K2Node_Select_Default, class USkinnedMeshComponent* K2Node_Select_Default_1, bool CallFunc_SetStaticMesh_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bpn_hero_showHandItem_C", "Received_NotifyEnd");

	Params::Ubpn_hero_showHandItem_C_Received_NotifyEnd_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.Hero = Hero;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsCGFake_Hero = K2Node_DynamicCast_AsCGFake_Hero;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsCh_Hero_00 = K2Node_DynamicCast_AsCh_Hero_00;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function bpn_hero_showHandItem.bpn_hero_showHandItem_C.Received_NotifyBegin
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TotalDuration                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               bFakeHero                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        RealStatic                                                       (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      RealSkeletal                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               Hero                                                             (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHandItemIndex          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGFakeHero*                 K2Node_DynamicCast_AsCGFake_Hero                                 (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               K2Node_DynamicCast_AsCh_Hero_00                                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult_1                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EHandItemIndex          Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      K2Node_Select_Default_1                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool Ubpn_hero_showHandItem_C::Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, bool bFakeHero, class UStaticMeshComponent* RealStatic, class USkeletalMeshComponent* RealSkeletal, class ACh_Hero_00_C* Hero, enum class EHandItemIndex Temp_byte_Variable, class AActor* CallFunc_GetOwner_ReturnValue, class ACGFakeHero* K2Node_DynamicCast_AsCGFake_Hero, bool K2Node_DynamicCast_bSuccess, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* K2Node_DynamicCast_AsCh_Hero_00, bool K2Node_DynamicCast_bSuccess_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UStaticMeshComponent* K2Node_Select_Default, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_1, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult_1, bool CallFunc_K2_AttachToComponent_ReturnValue_3, enum class EHandItemIndex Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, class USkeletalMeshComponent* K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bpn_hero_showHandItem_C", "Received_NotifyBegin");

	Params::Ubpn_hero_showHandItem_C_Received_NotifyBegin_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.TotalDuration = TotalDuration;
	Parms.bFakeHero = bFakeHero;
	Parms.RealStatic = RealStatic;
	Parms.RealSkeletal = RealSkeletal;
	Parms.Hero = Hero;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsCGFake_Hero = K2Node_DynamicCast_AsCGFake_Hero;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.K2Node_DynamicCast_AsCh_Hero_00 = K2Node_DynamicCast_AsCh_Hero_00;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_1 = CallFunc_K2_AttachToComponent_ReturnValue_1;
	Parms.CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue = CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult = CallFunc_K2_SetRelativeTransform_SweepHitResult;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_2 = CallFunc_K2_AttachToComponent_ReturnValue_2;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult_1 = CallFunc_K2_SetRelativeTransform_SweepHitResult_1;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_3 = CallFunc_K2_AttachToComponent_ReturnValue_3;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


