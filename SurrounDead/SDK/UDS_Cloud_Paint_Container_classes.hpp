#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x358 - 0x298)
// BlueprintGeneratedClass UDS_Cloud_Paint_Container.UDS_Cloud_Paint_Container_C
class AUDS_Cloud_Paint_Container_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                   Billboard;                                         // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*              SceneCaptureComponent2D;                           // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TMap<struct FIntPoint, class UUDS_Cloud_Paint_Cell_C*> Cloud_Painting_Cell_Data;                          // 0x2B0(0x50)(Edit, BlueprintVisible)
	int32                                        Cloud_Painting_Cell_Size;                          // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Cloud_Painting_Cell_Resolution;                    // 0x304(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<struct FIntPoint, class UTextureRenderTarget2D*> Cell_Render_Targets;                               // 0x308(0x50)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class AUDS_Cloud_Paint_Container_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_UDS_Cloud_Paint_Container(int32 EntryPoint, class AUltra_Dynamic_Sky_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AUltra_Dynamic_Sky_C* CallFunc_GetActorOfClass_ReturnValue_1, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_IsValid_ReturnValue_1, TArray<enum class EEndPlayReason>& K2Node_MakeArray_Array, bool CallFunc_Array_Contains_ReturnValue);
};

}


