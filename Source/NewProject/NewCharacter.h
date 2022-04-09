#pragma once

#include "GameFramework/Character.h"
#include "NewCharacter.generated.h"

UCLASS()
class NEWPROJECT_API ANewCharacter : public ACharacter
{
	GENERATED_BODY()

	ANewCharacter(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable)
	class UCMC_Extended* GetExtendedCMC() const;

	virtual void BeginPlay() override;
};