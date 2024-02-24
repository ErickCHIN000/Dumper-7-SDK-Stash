#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5F (0x1330 - 0x12D1)
// BlueprintGeneratedClass BP_GGNPC_Police.BP_GGNPC_Police_C
class ABP_GGNPC_Police_C : public ABP_GGNPC_Humanoid_C
{
public:
	uint8                                        Pad_91F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x12D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        NoticeRadius;                                      // 0x12E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_923[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AGGGoat*>                       NearbyGoats;                                       // 0x12E8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FTimerHandle                          GoatCheckTimer;                                    // 0x12F8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                NPCHandcuffsReference;                             // 0x1300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UObject>                 SoftHandCuffs;                                     // 0x1308(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_GGNPC_Police_C* GetDefaultObj();

	void OnLoaded_8F7D24694C82F721A577578B5AD69B0C(TSubclassOf<class UObject> Loaded);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_GGNPC_Police(int32 EntryPoint, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UClass* Temp_class_Variable, enum class EEndPlayReason K2Node_Event_EndPlayReason);
};

}


