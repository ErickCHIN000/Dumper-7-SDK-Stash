#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0xE98 - 0xE70)
// BlueprintGeneratedClass BP_Vehicle_Sedan.BP_Vehicle_Sedan_C
class ABP_Vehicle_Sedan_C : public ABP_Vehicle_Car_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE70(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  SportAttachment;                                   // 0xE78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             CoolHorn;                                          // 0xE80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SportVersionWeight;                                // 0xE88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A6A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundCue*                             NormalHorn;                                        // 0xE90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Vehicle_Sedan_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void OnVehicleAppearanceChanged(class AGGVehicle* Vehicle, const class FString& RowName, const class FString& AppearanceString);
	void ExecuteUbergraph_BP_Vehicle_Sedan(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGGVehicle* K2Node_CustomEvent_Vehicle, const class FString& K2Node_CustomEvent_RowName, const class FString& K2Node_CustomEvent_AppearanceString, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


