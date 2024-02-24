#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x94 (0xA84 - 0x9F0)
// BlueprintGeneratedClass BPWeap_SR_DAL_Tiabolt.BPWeap_SR_DAL_Tiabolt_C
class ABPWeap_SR_DAL_Tiabolt_C : public ABPWeap_SR_DAL_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(Transient, DuplicateTransient)
	class UBPWeaFireProjComp_SR_Tiabolt_C*       WeapFireComp;                                      // 0x9F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                        WeaponDamageTypes;                                 // 0xA00(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                PrimaryType;                                       // 0xA10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                SecondaryType;                                     // 0xA18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                TertiaryType;                                      // 0xA20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<int32, class UClass*>                   FindDamageType;                                    // 0xA28(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                CurrentDamageType;                                 // 0xA78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CycleIndex;                                        // 0xA80(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABPWeap_SR_DAL_Tiabolt_C* GetDefaultObj();

	void GetMode2DamageTypes(class UClass** DamageType02, class UClass** DamageType03, class UClass* ThirdDamageType, class UClass* SecondDamageType, int32 LookUpIndex, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_Percent_IntInt_ReturnValue, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue1, int32 CallFunc_Percent_IntInt_ReturnValue1, class UClass* CallFunc_Array_Get_Item1);
	void Init_DamageTypes(class UClass* CallFunc_Array_Get_Item, TArray<class UClass*>& K2Node_MakeArray_Array, float CallFunc_GetValueOfAttribute_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue1, int32 CallFunc_FTrunc_ReturnValue1, class UClass* CallFunc_Map_Find_Value1, bool CallFunc_Map_Find_ReturnValue1, class UGbxDamageType* CallFunc_GetDamageType_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Tiabolt_OnReload(class AWeapon* EventWeapon, bool bCompleted, bool bAmmoGiven);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_BPWeap_SR_DAL_Tiabolt(int32 EntryPoint, class AWeapon* K2Node_CustomEvent_EventWeapon, bool K2Node_CustomEvent_bCompleted, bool K2Node_CustomEvent_bAmmoGiven, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UClass* CallFunc_Array_Get_Item, int32 Temp_int_Variable, int32 CallFunc_Percent_IntInt_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason);
};

}


