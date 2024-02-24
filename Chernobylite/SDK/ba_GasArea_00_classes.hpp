#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8C (0x2AC - 0x220)
// BlueprintGeneratedClass ba_GasArea_00.ba_GasArea_00_C
class Aba_GasArea_00_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBoxComponent*                         Inner;                                             // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Outer;                                             // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        InnerHeight;                                       // 0x240(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InnerX;                                            // 0x244(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InnerY;                                            // 0x248(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OuterX;                                            // 0x24C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OuterY;                                            // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsActive_;                                        // 0x254(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bDebugable_;                                       // 0x255(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16DE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OuterHeight;                                       // 0x258(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16E3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextureRenderTarget2D*                Pong;                                              // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                Ping;                                              // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              PostProcessSimulation;                             // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CopyMachine;                                       // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                CurrentRTRef;                                      // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             WaterDropSize;                                     // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                Cpy;                                               // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               BufferedForwardVector;                             // 0x298(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             WaterDropPower;                                    // 0x2A4(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Aba_GasArea_00_C* GetDefaultObj();

	void ClearWaterDrops();
	void ProcessSimulation(class UTextureRenderTarget2D* Current, class UTextureRenderTarget2D* Prev, float CallFunc_GetInputAxisValue_ReturnValue, float CallFunc_GetInputAxisValue_ReturnValue_1, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_Abs_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue);
	void CreateWaterDrop(class UTextureRenderTarget2D* TextureRenderTarget, float UV_X, float UV_Y, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, class UCanvas* CallFunc_BeginDrawCanvasToRenderTarget_Canvas, const struct FVector2D& CallFunc_BeginDrawCanvasToRenderTarget_Size, const struct FDrawToRenderTargetContext& CallFunc_BeginDrawCanvasToRenderTarget_Context, float CallFunc_Conv_IntToFloat_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue);
	void UserConstructionScript(bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue_2, float CallFunc_SelectFloat_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1);
	void BndEvt__Outer_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__Outer_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__Inner_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__Inner_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ReceiveBeginPlay();
	void WaterDrop();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_ba_GasArea_00(int32 EntryPoint, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_3, class AActor* K2Node_ComponentBoundEvent_OtherActor_3, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_3, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_3, bool K2Node_ComponentBoundEvent_bFromSweep_1, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_2, class AActor* K2Node_ComponentBoundEvent_OtherActor_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool CallFunc_Not_PreBool_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, float CallFunc_RandomFloat_ReturnValue, float CallFunc_RandomFloat_ReturnValue_1, float K2Node_Event_DeltaSeconds, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsActorTickEnabled_ReturnValue);
};

}


