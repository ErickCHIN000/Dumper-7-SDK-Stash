#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x70 - 0x28)
// Class ConditionsRuntime.ConditionBehaviour
class UConditionBehaviour : public UObject
{
public:
	TWeakObjectPtr<class AConditionManager>      OwningManager;                                     // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                 ConditionHandle;                                   // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UObject>                Listener;                                          // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EConditionState                   CurrentState;                                      // 0x48(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A5F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FConditionPersistentData              ProgressData;                                      // 0x4C(0x8)(SaveGame, NoDestructor, NativeAccessSpecifierPrivate)
	struct FConditionPersistentData              CompletionData;                                    // 0x54(0x8)(NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A65[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CancellationMessage;                               // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UConditionBehaviour* GetDefaultObj();

	void UpdateUncompletion(struct FConditionPersistentData& UpdatedProgressData);
	void UpdateProgress(struct FConditionPersistentData& UpdatedProgressData);
	void UpdateCompletion(struct FConditionPersistentData& UpdatedProgressData, struct FConditionPersistentData& UpdatedCompletionData);
	void UpdateCancellation(const class FString& UpdatedCancellationMessage);
	void SetupCondition();
	void SetContextObject(class UObject* ContextObject);
	void SendConditionUpdate(int32 CurrentCount, int32 CountThreshold, bool bAllowUncompletion);
	void OnConditionRemoved();
	bool IsComplete();
	void InitializeFromPersistence(struct FConditionPersistentData& UpdatedProgressData);
	void GetDebugDescription(class FString& OutDescription);
	void CompleteIfSatisfiedOnSetup();
};

// 0x80 (0xF0 - 0x70)
// Class ConditionsRuntime.CompoundCondition
class UCompoundCondition : public UConditionBehaviour
{
public:
	uint8                                        Pad_AA0[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UConditionBehaviour*>           Conditions;                                        // 0x78(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_AA2[0x68];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCompoundCondition* GetDefaultObj();

};

// 0x0 (0xF0 - 0xF0)
// Class ConditionsRuntime.CompoundConditionAnd
class UCompoundConditionAnd : public UCompoundCondition
{
public:

	static class UClass* StaticClass();
	static class UCompoundConditionAnd* GetDefaultObj();

};

// 0x8 (0xF8 - 0xF0)
// Class ConditionsRuntime.CompoundConditionOr
class UCompoundConditionOr : public UCompoundCondition
{
public:
	int32                                        CountThreshold;                                    // 0xF0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AD2[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCompoundConditionOr* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ConditionsRuntime.ConditionFunctionLibrary
class UConditionFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UConditionFunctionLibrary* GetDefaultObj();

	void RemoveCondition(class UObject* WorldContextObject, struct FGuid& ConditionHandle);
	struct FConditionPersistentData MakeConditionPersistentDataFromBool(bool InBool);
	bool MakeBoolFromConditionPersistentData(struct FConditionPersistentData& InConditionPersistentData);
	struct FConditionPersistentData GetProgressData(struct FConditionStateData& ConditionStateData);
	TScriptInterface<class IConditionListenerInterface> GetListener(struct FConditionStateData& ConditionStateData);
	int32 GetConditionStatesCount(class UObject* WorldContextObject);
	enum class EConditionState GetConditionState(struct FConditionStateData& ConditionStateData);
	struct FGuid GetConditionHandle(struct FConditionStateData& ConditionStateData);
	struct FConditionStateData GetConditionDataFromConditionStates(class UObject* WorldContextObject, struct FGuid& ConditionHandle);
	TMap<struct FGuid, class UConditionBehaviour*> GetConditionBehaviours(class UObject* WorldContextObject);
	struct FConditionPersistentData GetCompletionData(struct FConditionStateData& ConditionStateData);
	class FString GetCancellationMessage(struct FConditionStateData& ConditionStateData);
	TSubclassOf<class UConditionBehaviour> GetBehaviourClass(struct FConditionStateData& ConditionStateData);
	void CreateConditionFromTemplate(struct FGuid& ConditionHandle, class UObject* Listener, class UConditionBehaviour* TemplateBehaviour, class UObject* ContextObject, struct FConditionPersistentData& PersistenceData);
	bool ConditionStatesContainsCondition(class UObject* WorldContextObject, struct FGuid& ConditionHandle);
	void ClearAllConditions(class UObject* WorldContextObject);
};

// 0x8 (0xA8 - 0xA0)
// Class ConditionsRuntime.ConditionListenerActorComponent
class UConditionListenerActorComponent : public UActorComponent
{
public:
	uint8                                        Pad_C93[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UConditionListenerActorComponent* GetDefaultObj();

};

// 0x8 (0x2B0 - 0x2A8)
// Class ConditionsRuntime.ConditionListenerSceneComponent
class UConditionListenerSceneComponent : public USceneComponent
{
public:
	uint8                                        Pad_C9C[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UConditionListenerSceneComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ConditionsRuntime.ConditionListenerInterface
class IConditionListenerInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IConditionListenerInterface* GetDefaultObj();

	void OnConditionUpdated(struct FGuid& ConditionHandle, struct FConditionPersistentData& ProgressData);
	void OnConditionUncompleted(struct FGuid& ConditionHandle, struct FConditionPersistentData& ProgressData);
	void OnConditionCompleted(struct FGuid& ConditionHandle, struct FConditionPersistentData& ProgressData, struct FConditionPersistentData& CompletionData);
	void OnConditionCancelled(struct FGuid& ConditionHandle, const class FString& CancellationMessage);
};

// 0x50 (0x310 - 0x2C0)
// Class ConditionsRuntime.ConditionManager
class AConditionManager : public AManagerBase
{
public:
	TMap<struct FGuid, class UConditionBehaviour*> ConditionBehaviours;                               // 0x2C0(0x50)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AConditionManager* GetDefaultObj();

};

// 0x8 (0x2A8 - 0x2A0)
// Class ConditionsRuntime.ConditionTestActor
class AConditionTestActor : public AActor
{
public:
	uint8                                        Pad_D33[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AConditionTestActor* GetDefaultObj();

};

}


