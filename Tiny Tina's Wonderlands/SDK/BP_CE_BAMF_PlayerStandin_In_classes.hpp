#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x158 - 0x148)
// BlueprintGeneratedClass BP_CE_BAMF_PlayerStandin_In.BP_CE_BAMF_PlayerStandin_In_C
class UBP_CE_BAMF_PlayerStandin_In_C : public UBP_CE_TechDeath_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x148(0x8)(Transient, DuplicateTransient)
	class UWwiseEvent*                           Audio_BamfIn;                                      // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_CE_BAMF_PlayerStandin_In_C* GetDefaultObj();

	void OnBegin(class AActor* Actor);
	void ExecuteUbergraph_BP_CE_BAMF_PlayerStandin_In(int32 EntryPoint, class AActor* K2Node_Event_Actor, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, float CallFunc_VSize_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue);
};

}


