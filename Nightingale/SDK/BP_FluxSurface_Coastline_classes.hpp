#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x6F0 - 0x6D0)
// BlueprintGeneratedClass BP_FluxSurface_Coastline.BP_FluxSurface_Coastline_C
class ABP_FluxSurface_Coastline_C : public ABP_FluxSurface_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        PostProcessSwitch;                                 // 0x6D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_437E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USceneComponent*>               SceneComponent_Array;                              // 0x6E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class ABP_FluxSurface_Coastline_C* GetDefaultObj();

	void UpdatePostProcess(int32 UpdatePostProcess_Switch, bool CallFunc_IsServer_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Lerp_ReturnValue, int32 CallFunc_FTrunc_ReturnValue);
	void UserConstructionScript(bool CallFunc_Conv_IntToBool_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_FluxSurface_Coastline(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Conv_IntToBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8);
};

}


