#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0x5C - 0x3B)
// BlueprintGeneratedClass BuffLifeStealForNextXHit.BuffLifeStealForNextXHit_C
class UBuffLifeStealForNextXHit_C : public UBuffObject_C
{
public:
	uint8                                        Pad_2D5D[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x40(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        HealPercentage;                                    // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        HitCount;                                          // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UTexture2D*                            Icon;                                              // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        IconID;                                            // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBuffLifeStealForNextXHit_C* GetDefaultObj();

	void GetIcon(class UTexture2D** Output_Get, enum class EComboTypes Temp_byte_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, class UTexture2D* Temp_object_Variable_3, class UTexture2D* Temp_object_Variable_4, class UTexture2D* Temp_object_Variable_5, class UTexture2D* Temp_object_Variable_6, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess, enum class EComboTypes CallFunc_0_Base_GetCurrentWeapon_CurrentWeapon, class UTexture2D* K2Node_Select_Default);
	void OnBuffedActorHitsTarget();
	void OnBuffEnd(bool bInterrupted);
	void OnBuffStart();
	void Reinit(int32 HitCount);
	void ExecuteUbergraph_BuffLifeStealForNextXHit(int32 EntryPoint, class UTexture2D* CallFunc_GetIcon_Output_Get, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool K2Node_Event_bInterrupted, class AGameplayGM_C* CallFunc_GetGameplayGM_GameModeRef, class AGameplayGM_C* CallFunc_GetGameplayGM_GameModeRef_1, int32 CallFunc_AddStatusIcon_IconID, class AGameplayGM_C* CallFunc_GetGameplayGM_GameModeRef_2, int32 K2Node_CustomEvent_HitCount, bool CallFunc_LessEqual_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


