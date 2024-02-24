#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x4A8 - 0x499)
// BlueprintGeneratedClass Vehicle_Humvee.Vehicle_Humvee_C
class AVehicle_Humvee_C : public ABP_VehicleMaster_C
{
public:
	uint8                                        Pad_1E42[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AVehicle_Humvee_C* GetDefaultObj();

	void UserConstructionScript(TArray<class USpotLightComponent*>& K2Node_MakeArray_Array);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Vehicle_Humvee(int32 EntryPoint);
};

}


