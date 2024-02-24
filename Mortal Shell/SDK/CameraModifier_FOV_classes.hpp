#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x58 - 0x48)
// BlueprintGeneratedClass CameraModifier_FOV.CameraModifier_FOV_C
class UCameraModifier_FOV_C : public UCameraModifier
{
public:
	float                                        FOV;                                               // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12CA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameplayPC_C*                         GameplayPC;                                        // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCameraModifier_FOV_C* GetDefaultObj();

	void BlueprintModifyCamera(float DeltaTime, const struct FVector& ViewLocation, const struct FRotator& ViewRotation, float FOV, struct FVector* NewViewLocation, struct FRotator* NewViewRotation, float* NewFOV, float Local_FOV_New, float Local_FOV_Original, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable, float CallFunc_Add_FloatFloat_ReturnValue, float K2Node_Select_Default);
};

}


