#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x640 - 0x630)
// BlueprintGeneratedClass BP_ZoneMap_ChallengePOI.BP_ZoneMap_ChallengePOI_C
class ABP_ZoneMap_ChallengePOI_C : public AOakZoneMapChallengeIcon
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x630(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x638(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ZoneMap_ChallengePOI_C* GetDefaultObj();

	void UserConstructionScript(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1);
	void Activate_POI();
	void ReceiveBeginPlay();
	void Begin_Zone_Map_Cursor_Over();
	void End_Zone_Map_Cursor_Over();
	void K2_OnChallengeUpdated();
	void ExecuteUbergraph_BP_ZoneMap_ChallengePOI(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UTexture2D* CallFunc_GetChallengeIconTexture_ReturnValue, bool CallFunc_IsValid_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue);
};

}


