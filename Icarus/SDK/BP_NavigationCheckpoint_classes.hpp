#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x22 (0x242 - 0x220)
// BlueprintGeneratedClass BP_NavigationCheckpoint.BP_NavigationCheckpoint_C
class ABP_NavigationCheckpoint_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                   Billboard;                                         // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                  TextRender;                                        // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         IsValid;                                           // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PrintFailures;                                     // 0x241(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_NavigationCheckpoint_C* GetDefaultObj();

	void ValidateCheckpoint(const struct FColor& K2Node_MakeStruct_Color, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool CallFunc_IsInEditorViewport_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FColor& K2Node_MakeStruct_Color_1, bool Temp_bool_Variable_1, class FText K2Node_Select_Default, const struct FColor& K2Node_Select_Default_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsCheckpointValid_ReturnValue, bool CallFunc_NotEqualExactly_VectorVector_ReturnValue);
	bool IsCheckpointValid(const struct FVector& ProjectedNav, const class FString& CallFunc_GetDisplayName_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FVector& CallFunc_K2_ProjectPointToNavigation_ProjectedLocation, bool CallFunc_K2_ProjectPointToNavigation_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_NavigationCheckpoint(int32 EntryPoint);
};

}


