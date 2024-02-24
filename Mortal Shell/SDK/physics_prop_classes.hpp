#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x274 - 0x264)
// BlueprintGeneratedClass physics_prop.physics_prop_C
class APhysics_prop_C : public Abp_imrod_helmet_C
{
public:
	uint8                                        Pad_263B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x268(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        OverlapTime;                                       // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class APhysics_prop_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_physics_prop(int32 EntryPoint, class AActor* K2Node_Event_OtherActor, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_VSizeSquared_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
};

}


