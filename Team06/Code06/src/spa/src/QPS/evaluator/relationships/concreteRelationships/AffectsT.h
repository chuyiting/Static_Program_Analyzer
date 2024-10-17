#pragma once
#include <utility>
#include <memory>

#include "QPS/evaluator/relationships/Relationship.h"
#include "QPS/evaluator/relationships/StmtStmtRelationship.h"
#include "QPS/evaluator/relationships/relationshipStructs/StmtRef.h"

class AffectsT : public StmtStmtRelationship {
public:
  AffectsT(StmtRef lhs, StmtRef rhs);

protected:
  bool isSatisfiedConcrete(std::shared_ptr<PKBGetter> pkb, std::string lhs,
                           std::string rhs) override;

  bool queryLeftDomain(std::shared_ptr<PKBGetter> pkb, std::string rhs,
                       domain_t &result) override;

  bool queryRightDomain(std::shared_ptr<PKBGetter> pkb, std::string lhs,
                        domain_t &result) override;
};